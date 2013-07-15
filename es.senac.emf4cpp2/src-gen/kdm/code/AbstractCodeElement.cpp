
#include "kdm/code/AbstractCodeElement.hpp"

using namespace kdm::code;

AbstractCodeElement::AbstractCodeElement() : source(this), comment(this), codeRelation(this)
{
}

AbstractCodeElement::~AbstractCodeElement()
{
}

