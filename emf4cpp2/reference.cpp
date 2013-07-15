#include "reference.hpp"

using namespace e4c;

reference::reference(eclass * owner_) : 
    structural_feature(owner_, REFERENCE) 
{}

reference::~reference() {}

void reference::notify(eclass * opposite, tag_t tag, bool set)
{
    if (opposite)
    {
        opposite->set_reference(tag, owner(), set);
    }
}
