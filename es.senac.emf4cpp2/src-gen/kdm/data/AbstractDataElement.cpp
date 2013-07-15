
#include "kdm/data/AbstractDataElement.hpp"

using namespace kdm::data;

AbstractDataElement::AbstractDataElement() : source(this), dataRelation(this), abstraction(this)
{
}

AbstractDataElement::~AbstractDataElement()
{
}

