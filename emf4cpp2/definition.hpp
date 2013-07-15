#ifndef EMF4CPP2_DEFINITION_HPP
#define EMF4CPP2_DEFINITION_HPP

#define BOOST_MPL_CFG_NO_PREPROCESSED_HEADERS
#define BOOST_MPL_LIMIT_LIST_SIZE 50
#include <boost/mpl/list.hpp>

namespace e4c
{
namespace definition
{

template < class EClass >
struct eclass;

template < class EClass >
struct epackage;

template < typename Type >
struct name
{
    static const char * get();
};

} // namespace definition
} // namespace e4c

#endif // EMF4CPP2_DEFINITION_HPP

