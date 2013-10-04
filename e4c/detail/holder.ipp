#ifndef E4C_DETAIL_HOLDER_IPP
#define E4C_DETAIL_HOLDER_IPP

#include <e4c/holder.hpp>
#include <utility>

namespace e4c 
{
namespace detail 
{

template< typename T >
struct holder_ref_impl;

} // namespace detail

template< typename Value >
Value& holder::to_value()
{
    typedef detail::holder_ref_impl< Value > value_impl;

    value_impl * p = reinterpret_cast< value_impl * >(
            m_impl.get());

    return p->aux;
}

namespace detail 
{

template< typename T >
struct holder_ref_impl : public holder_impl_base
{
    typedef T value_type;

    T aux;

    holder_ref_impl() :
        aux()
    {
    }

    holder_ref_impl(const T& t) : 
        aux(t)
    {
    }

    holder_ref_impl(T&& t) : 
        aux(t)
    {
    }

    ~holder_ref_impl()
    {
    }

    //descriptor_ptr get_type_descriptor() const
    //{
        //return descriptor< T >::instance();
    //}

    //holder_impl_base * clone() const
    //{
        //// Deep copy
        //holder_ref_impl * new_ = 
            //new holder_ref_impl;

        //do_copy(t_, new_->t_);

        //return new_;
    //}
};

} // namespace detail

template < typename T >
holder_impl_base * create_holder(const T& t)
{
    return new detail::holder_ref_impl< T >(t);
}

template < typename T >
holder_impl_base * create_holder(T&& t)
{
    return new detail::holder_ref_impl< T >(
            std::forward< T >(t));
}

template < typename T >
holder_impl_base * create_holder()
{
    return new detail::holder_ref_impl< T >();
}

} // namespace e4c

#endif /* E4C_DETAIL_HOLDER_IPP */

