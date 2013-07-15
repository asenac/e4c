#ifndef EMF4CPP2_TAG_HPP
#define EMF4CPP2_TAG_HPP

namespace e4c
{

typedef const int * tag_t;

template < typename TagType >
struct tag
{
    static tag_t get();
};

} // namespace e4c

#endif // EMF4CPP2_TAG_HPP

