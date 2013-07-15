
#include "kdm/event/AbstractEventElement.hpp"

using namespace kdm::event;

AbstractEventElement::AbstractEventElement() : source(this), eventRelation(this), abstraction(this), implementation(this)
{
}

AbstractEventElement::~AbstractEventElement()
{
}

