
#include "CTypedElement.hpp"
#include <C/CClassifier.hpp>
#include <C/CSourceText.hpp>

using namespace C;

CTypedElement::CTypedElement() : type(this), source(this)
{
}

CTypedElement::~CTypedElement()
{
}

