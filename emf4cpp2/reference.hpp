#ifndef EMF4CPP2_REFERENCE_HPP
#define EMF4CPP2_REFERENCE_HPP

#include <memory>
#include <vector>
#include <set>
#include <boost/ptr_container/ptr_vector.hpp>
#include <boost/ptr_container/ptr_set.hpp>
#include <boost/mpl/if.hpp>
#include <emf4cpp2/structural_feature.hpp>

namespace e4c
{

class reference : public structural_feature
{
protected:
    reference(eclass * owner_);

    void notify(eclass * opposite, tag_t tag, bool set);

    virtual void set(bool set, eclass * value) = 0;

    friend class eclass;

public:
    virtual ~reference();
};

namespace detail 
{

template < typename T >
struct reference_traits
{
    typedef std::auto_ptr< T >      ContainmentType;
    typedef T *                     NoContainmentType;
    typedef std::set< T * >         UnorderedNoContainmentType;
    typedef boost::ptr_set< T >     UnorderedContainmentType;
    typedef std::vector< T * >      OrderedNoContainmentType;
    typedef boost::ptr_vector< T >  OrderedContainmentType;
};

template < typename TagType >
struct calculate_reference_type
{
    typedef typename TagType::eReferenceType eReferenceType;
    typedef typename 
        boost::mpl::if_c< TagType::containment,
            typename reference_traits< eReferenceType >::ContainmentType, 
            typename reference_traits< eReferenceType >::NoContainmentType 
        >::type type;
};

template < typename TagType >
struct calculate_vector_type
{
    typedef typename TagType::eReferenceType eReferenceType;
    typedef typename 
        boost::mpl::if_c< TagType::containment,
            typename 
                reference_traits< eReferenceType >::OrderedContainmentType, 
            typename 
                reference_traits< eReferenceType >::OrderedNoContainmentType 
        >::type type;
};

template < typename TagType >
struct calculate_set_type
{
    typedef typename TagType::eReferenceType eReferenceType;
    typedef typename 
        boost::mpl::if_c< TagType::containment,
            typename 
                reference_traits< eReferenceType >::UnorderedContainmentType, 
            typename 
                reference_traits< eReferenceType >::UnorderedNoContainmentType 
        >::type type;
};

template < typename T >
struct pointer_helper;

template < typename T >
struct pointer_helper< T * >
{
    static inline T * get(T * t) { return t; }
    static inline void release(T *& t) { t = NULL; }
    static inline T * null() { return NULL; }
};

template < typename T >
struct pointer_helper< const T * >
{
    static inline const T * get(const T * t) { return t; }
};

template < typename T >
struct pointer_helper< std::auto_ptr< T > >
{
    static inline T * get(std::auto_ptr< T >& t) 
    { 
        return t.get(); 
    }

    static inline void release(std::auto_ptr< T >& t) 
    { 
        t.release(); 
    }

    static inline std::auto_ptr< T > null()
    {
        return std::auto_ptr< T >();
    }
};

template < typename T >
struct pointer_helper< const std::auto_ptr< T > >
{
    static inline const T * get(const std::auto_ptr< T >& t) 
    { 
        return t.get(); 
    }
};

template < typename TagType >
struct reference_holder_type
{
    typedef typename TagType::eReferenceType T;
    typedef typename calculate_reference_type< TagType >::type type;
    typedef typename TagType::eOpposite OppositeTag;

    reference_holder_type() : 
        m_value(pointer_helper< type >::null())
    {
    }

    operator T * () { return pointer_helper< type >::get(m_value); }

    operator const T * () const 
    { 
        return pointer_helper< const type >::get(m_value); 
    }

    void operator=(T * val)
    {
        if (TagType::hasOpposite && m_value)
            notify(pointer_helper< type >::get(m_value), 
                    tag< OppositeTag >::get(), false);

        m_value = val;

        if (TagType::hasOpposite)
            notify(val, tag< OppositeTag >::get(), true);
    }
 
protected:

    virtual void notify(eclass * opposite, tag_t tag, bool set) = 0;

    void set(bool set, eclass * value)
    {
        if (set)
        {
            if (pointer_helper< type >::get(m_value))
            {
                notify(pointer_helper< type >::get(m_value), 
                        tag< OppositeTag >::get(), false);
            }

            m_value = type(dynamic_cast< T * >(value));
        }
        else
        {
            pointer_helper< type >::release(m_value);
        }
    }

    type m_value;
};

template < typename T, typename VectorT >
struct vector_helper
{
    static inline T * get(VectorT& val, std::size_t i)
    {
        return val[i];
    }

    static inline const T * get(const VectorT& val, std::size_t i)
    {
        return val[i];
    }
    
    template< typename Iterator >
    static inline T * get(Iterator it)
    {
        return *it;
    }

    template< typename Iterator >
    static inline void release(VectorT& val, Iterator& it)
    {
        val.erase(it);
    }
};

template < typename T >
struct vector_helper< T, boost::ptr_vector< T > >
{
    typedef boost::ptr_vector< T > VectorT;

    static inline T * get(VectorT& val, std::size_t i)
    {
        return &val[i];
    }

    static inline const T * get(const VectorT& val, std::size_t i)
    {
        return &val[i];
    }

    template< typename Iterator >
    static inline T * get(Iterator& it)
    {
        return &*it;
    }

    template< typename Iterator >
    static inline void release(VectorT& val, Iterator& it)
    {
        typename VectorT::auto_type a = val.release(it);
        a.release();
    }
};

// TODO will have the same usage as std::vector
template < typename TagType >
struct reference_vector_holder_type
{
    typedef typename TagType::eReferenceType T;
    typedef typename TagType::eOpposite OppositeTag;
    typedef typename calculate_vector_type< TagType >::type type;
    typedef vector_helper< T, type > helper_t;

    void push_back(T * item)
    {
        m_value.push_back(item);

        // Don't need to check it at compile time, since compilers are
        // smart enough to remove this if it doesn't have an opposite
        if (TagType::hasOpposite)
            notify(item, tag< OppositeTag >::get(), true);
    }

    std::size_t size() const
    {
        return m_value.size();
    }

    void clear()
    {
        if (TagType::hasOpposite)
            for (std::size_t i = 0; i < size(); i++)
                notify(helper_t::get(m_value, i), 
                        tag< OppositeTag >::get(), false);

        m_value.clear();
    }

    T * operator[](std::size_t i)
    {
        return helper_t::get(m_value, i);
    }

    const T * operator[](std::size_t i) const
    {
        return helper_t::get(m_value, i);
    }

protected:

    virtual void notify(eclass * opposite, tag_t tag, bool set) = 0;

    void set(bool set, eclass * value)
    {
        T * val = dynamic_cast< T * >(value);

        if (set)
        {
            m_value.push_back(val);
        }
        else
        {
            for (typename type::iterator it = m_value.begin(); 
                    it != m_value.end(); it++)
            {
                if (helper_t::get(it) == val)
                {
                    helper_t::release(m_value, it);
                    break;
                }
            }
        }
    }

    type m_value;
};

// TODO will have the same usage as std::set
template < typename TagType >
struct reference_set_holder_type
{
    typedef typename TagType::eReferenceType T;
    typedef typename calculate_set_type< TagType >::type item_type;
    typedef std::set< item_type > type;

protected:

    virtual void notify(eclass * opposite, tag_t tag, bool set) = 0;

    void set(bool set, eclass * value)
    {
        //T * val = dynamic_cast< T * >(value);

        //if (set)
        //{
            ////m_value.insert(val);
        //}
        //else
        //{
            //// TODO helper... requires a compliation test
        //}
    }

    type m_value;
};

template < typename TagType >
struct calculate_reference_holder_type
{
    typedef typename 
        boost::mpl::if_c< TagType::upperBound == 1,
            reference_holder_type< TagType >,
            typename boost::mpl::if_c< TagType::ordered,
                reference_vector_holder_type< TagType >,
                reference_set_holder_type< TagType >
        >::type >::type type;
};

} // namespace detail

namespace impl
{

template < typename TagType, 
           typename impl_type = typename ::e4c::detail::calculate_reference_holder_type < TagType >::type >
class reference : public ::e4c::reference, public impl_type
{
public:
    typedef typename TagType::eClass eClass;
    typedef impl_type implementation;

    reference(eClass * owner);

    const char * name() const;
    tag_t tag() const;

    template < typename T >
    void operator=(T t)
    {
        impl_type::operator=(t);
    }

protected:

    void notify(eclass * opposite, tag_t tag, bool set);

    void set(bool set, eclass * value);
};

} // namespace impl
} // namespace e4c

#endif // EMF4CPP2_REFERENCE_HPP

