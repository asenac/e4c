#ifndef E4C_TAG_HPP
#define E4C_TAG_HPP

namespace e4c
{

typedef const int * tag_t;

template < typename TagType >
struct tag
{
    static tag_t get();
};

} // namespace e4c

#endif // E4C_TAG_HPP

