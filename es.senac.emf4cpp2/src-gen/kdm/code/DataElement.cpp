
#include "kdm/code/DataElement.hpp"

using namespace kdm::code;

DataElement::DataElement() : type(this), ext(this), size(this), codeElement(this)
{
}

DataElement::~DataElement()
{
}

