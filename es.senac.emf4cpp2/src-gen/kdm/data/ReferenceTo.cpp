
#include "kdm/data/ReferenceTo.hpp"

using namespace kdm::data;

ReferenceTo::ReferenceTo() : to(this), from(this)
{
}

ReferenceTo::~ReferenceTo()
{
}

