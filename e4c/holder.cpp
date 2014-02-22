#include "holder.hpp"
#include <e4c/detail/holder.ipp>
#include <cstdint>

namespace e4c
{

template bool& holder::to_value< bool >();
template short& holder::to_value< short >();
template unsigned short& holder::to_value< unsigned short >();
template char& holder::to_value< char >();
template unsigned char& holder::to_value< unsigned char >();
template std::int32_t& holder::to_value< std::int32_t >();
template std::uint32_t& holder::to_value< std::uint32_t >();
template std::int64_t& holder::to_value< std::int64_t >();
template std::uint64_t& holder::to_value< std::uint64_t >();
template float& holder::to_value< float >();
template double& holder::to_value< double >();

holder_impl_base::~holder_impl_base()
{
}

holder::holder()
{
}

holder::holder(holder_impl_base * impl) :
    m_impl(holder_impl_ptr(impl))
{
}

holder::holder(const holder& o) :
    m_impl(o.m_impl)
{
}

holder& holder::operator=(const holder& o)
{
    m_impl = o.m_impl;

    return *this;
}

//descriptor_ptr holder::get_type_descriptor() const
//{
    //if (!m_impl)
        //return NULL;

    //return m_impl->get_type_descriptor();
//}

//holder_impl_base * holder::clone() const
//{
    //if (!m_impl)
        //return NULL;

    //return m_impl->clone();
//}

bool holder::is_valid() const
{
    return m_impl.get() != 0;
}
} // namespace e4c

