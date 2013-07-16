
#include "ETypedElement.hpp"
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>

using namespace ecore;

ETypedElement::ETypedElement() : ordered(this), unique(this), lowerBound(this), upperBound(this), many(this), required(this), eType(this), eGenericType(this)
{
}

ETypedElement::~ETypedElement()
{
}

