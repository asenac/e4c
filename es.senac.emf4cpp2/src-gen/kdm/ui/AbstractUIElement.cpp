
#include "kdm/ui/AbstractUIElement.hpp"

using namespace kdm::ui;

AbstractUIElement::AbstractUIElement() : source(this), UIRelation(this), implementation(this), abstraction(this)
{
}

AbstractUIElement::~AbstractUIElement()
{
}

