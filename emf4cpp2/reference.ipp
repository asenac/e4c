#ifndef EMF4CPP2_REFERENCE_IPP
#define EMF4CPP2_REFERENCE_IPP

#include <emf4cpp2/reference.hpp>
#include <emf4cpp2/definition.hpp>

namespace e4c 
{
namespace impl 
{

///////////////////////////////////////////////////////////////////////////////
//
// reference
//
///////////////////////////////////////////////////////////////////////////////

template < typename TagType, typename impl_type >
reference< TagType, impl_type >::reference(eClass * owner) : 
    ::e4c::reference(owner)
{
}

template < typename TagType, typename impl_type >
const char * reference< TagType, impl_type >::name() const 
{ 
    typedef typename ::e4c::definition::name< TagType > name_t;

    return name_t::get(); 
}

template < typename TagType, typename impl_type >
tag_t reference< TagType, impl_type >::tag() const 
{ 
    return ::e4c::tag< TagType >::get(); 
}

template < typename TagType, typename impl_type >
void reference< TagType, impl_type >::notify(eclass * opposite, 
        tag_t tag, bool set)
{
    ::e4c::reference::notify(opposite, tag, set);
}

template < typename TagType, typename impl_type >
void reference< TagType, impl_type >::set(bool set, eclass * value)
{
    impl_type::set(set, value);
}

} // namespace impl


namespace detail 
{

#if 0
///////////////////////////////////////////////////////////////////////////////
//
// reference_holder_type
//
///////////////////////////////////////////////////////////////////////////////

template < typename TagType >
reference_holder_type< TagType >::reference_holder_type() : 
    m_value(pointer_helper< type >::null())
{
}

template < typename TagType >
void reference_holder_type< TagType >::set(bool set, eclass * value)
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

///////////////////////////////////////////////////////////////////////////////
//
// reference_vector_holder_type
//
///////////////////////////////////////////////////////////////////////////////

template < typename TagType >
void reference_vector_holder_type< TagType >::push_back(T * item)
{
    m_value.push_back(item);

    // Don't need to check it at compile time, since compilers are
    // smart enough to remove this if it doesn't have an opposite
    if (TagType::hasOpposite)
        notify(item, tag< OppositeTag >::get(), true);
}

template < typename TagType >
std::size_t reference_vector_holder_type< TagType >::size() const
{
    return m_value.size();
}

template < typename TagType >
void reference_vector_holder_type< TagType >::clear()
{
    if (TagType::hasOpposite)
        for (std::size_t i = 0; i < size(); i++)
            notify(helper_t::get(m_value, i), 
                    tag< OppositeTag >::get(), false);

    m_value.clear();
}

template < typename TagType >
void reference_vector_holder_type< TagType >::set(bool set, eclass * value)
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

///////////////////////////////////////////////////////////////////////////////
//
// reference_set_holder_type
//
///////////////////////////////////////////////////////////////////////////////

template < typename TagType >
void reference_set_holder_type< TagType >::set(bool set, eclass * value)
{
    T * val = dynamic_cast< T * >(value);

    if (set)
    {
        m_value.insert(val);
    }
    else
    {
        // TODO helper... requires a compliation test
    }
}

#endif

} // namespace detail
} // namespace e4c

#endif /* EMF4CPP2_REFERENCE_IPP */

