#ifndef E4C_MAPPING_HPP
#define E4C_MAPPING_HPP

#include <string>
#include <set>
#include <vector>
#include <memory>
#include <algorithm>
#include <cstdint>
#include <e4c/holder.hpp>

namespace ecore 
{
class EObject;
} // namespace ecore

namespace e4c 
{

typedef std::function< holder (ecore::EObject*)> get_t;
typedef std::function< void (ecore::EObject*, holder)> set_t;

template< typename T >
T * returned(const std::unique_ptr< T >& t)
{
    return t.get();
}

template< typename T >
T * returned(T* t)
{
    return t;
}

template< typename T >
std::vector< T * > returned(const std::vector< std::unique_ptr< T > >& t)
{
    std::vector< T* > r;
    for (auto i = t.begin(); i != t.end(); i++) 
        r.push_back(i->get());
    return r;
}

template< typename T >
std::set< T * > returned(const std::set< std::unique_ptr< T > >& t)
{
    std::set< T* > r;
    for (auto i = t.begin(); i != t.end(); i++) 
        r.insert(i->get());
    return r;
}

template< typename T >
std::vector< T * > returned(const std::vector< T * >& t)
{
    return t;
}

template< typename T >
std::set< T * > returned(const std::set< T * >& t)
{
    return t;
}

template< typename T, typename Y >
bool contains(const T& t, Y * y)
{
    return std::find(t.begin(), t.end(), y) != t.end();
}

} // namespace e4c

#endif // E4C_MAPPING_HPP

