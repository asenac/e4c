
#include "kdm/platform/AbstractPlatformElement.hpp"

using namespace kdm::platform;

AbstractPlatformElement::AbstractPlatformElement() : source(this), relation(this), abstraction(this), implementation(this)
{
}

AbstractPlatformElement::~AbstractPlatformElement()
{
}

