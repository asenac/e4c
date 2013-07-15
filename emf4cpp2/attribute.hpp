#ifndef EMF4CPP2_ATTRIBUTE_HPP
#define EMF4CPP2_ATTRIBUTE_HPP

#include <vector>
#include <emf4cpp2/definition.hpp>
#include <emf4cpp2/structural_feature.hpp>

namespace e4c
{

class attribute : public structural_feature
{
protected:
    attribute(eclass * owner_);
public:
    virtual ~attribute();
};

namespace detail 
{

template < typename TagType >
struct simple_attribute_holder
{
    typedef typename TagType::eType eType;
    eType m_value;

    operator eType&() { return m_value; }
    operator const eType&() const { return m_value; }
    
    eType& operator*() { return m_value; }
    const eType& operator*() const { return m_value; }

    template< typename T >
    void operator=(T t)
    {
        m_value = t;
    }
};

template < typename TagType >
struct calculate_attribute_holder_type
{
    typedef simple_attribute_holder < TagType > type;
};

} // namespace detail

namespace impl
{

template < typename TagType, 
           typename impl_type = typename ::e4c::detail::calculate_attribute_holder_type < TagType >::type >
class attribute : public ::e4c::attribute, public impl_type
{
public:
    typedef typename TagType::eClass eClass;
    typedef typename TagType::eType eType;
    typedef typename ::e4c::definition::name< TagType > name_t;

    attribute(eClass * owner) :
        ::e4c::attribute(owner)
    {
    }

    const char * name() const { return name_t::get(); }
    tag_t tag() const { return ::e4c::tag< TagType >::get(); }

    template< typename T >
    void operator=(T t)
    {
        impl_type::operator=(t);
    }
};

} // namespace impl
} // namespace e4c

#endif // EMF4CPP2_ATTRIBUTE_HPP

