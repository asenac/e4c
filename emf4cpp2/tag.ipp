#ifndef EMF4CPP2_TAG_IPP
#define EMF4CPP2_TAG_IPP

#include <emf4cpp2/tag.hpp>

namespace e4c
{

template < typename TagType >
tag_t tag< TagType >::get() 
{ 
    static const int value = 0; 
    return &value; 
}

} // namespace e4c

#endif // EMF4CPP2_TAG_IPP

