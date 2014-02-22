#ifndef E4C_SELECT_HPP
#define E4C_SELECT_HPP

#include <set>
#include <vector>

namespace e4c
{

template< typename T, typename Y >
std::vector< T * > select(const std::vector< Y * >& t)
{
    std::vector< T * > r;
    for (auto i = t.begin(); i != t.end(); ++i)
    {
        T * s = dynamic_cast< T * >(*i);
        if (s) r.push_back(s);
    }
    return r;
}

template< typename T, typename Y >
std::set< T * > select(const std::set< Y * >& t)
{
    std::set< T * > r;
    for (auto i = t.begin(); i != t.end(); ++i)
    {
        T * s = dynamic_cast< T * >(*i);
        if (s) r.insert(s);
    }
    return r;
}

} // namespace e4c

#endif // E4C_SELECT_HPP

