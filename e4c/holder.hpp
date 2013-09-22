#ifndef E4C_HOLDER_HPP
#define E4C_HOLDER_HPP

#include <memory>

namespace e4c 
{

struct holder;

struct holder_impl_base 
{
    virtual ~holder_impl_base();
    //virtual holder_impl_base * clone() const = 0;
    //virtual descriptor_ptr get_type_descriptor() const = 0;
};

typedef std::shared_ptr< holder_impl_base > holder_impl_ptr;

template < typename T >
holder_impl_base * create_holder(const T& t);

//template < typename T >
//holder_impl_base * create_holder(T&& t);

template < typename T >
holder_impl_base * create_holder();

struct holder
{
    holder();

    holder(holder_impl_base * impl);

    holder(const holder& o);

    holder& operator=(const holder& o);

    template< typename Value >
    Value& to_value();

    //holder_impl_base * clone() const;

    bool is_valid() const;

    //descriptor_ptr get_type_descriptor() const;
    
    holder_impl_ptr m_impl;
};

} // namespace e4c

#endif /* E4C_HOLDER_HPP */

