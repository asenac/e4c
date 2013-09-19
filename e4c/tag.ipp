#ifndef E4C_TAG_IPP
#define E4C_TAG_IPP

#include <e4c/tag.hpp>

namespace e4c
{

template < typename TagType >
tag_t tag< TagType >::get() 
{ 
    static const int value = 0; 
    return &value; 
}

} // namespace e4c

#endif // E4C_TAG_IPP

