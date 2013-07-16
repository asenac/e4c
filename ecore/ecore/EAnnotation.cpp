
#include "EAnnotation.hpp"
#include <ecore/EStringToStringMapEntry.hpp>
#include <ecore/EModelElement.hpp>
#include <ecore/EObject.hpp>

using namespace ecore;

EAnnotation::EAnnotation() : source(this), details(this), eModelElement(this), contents(this), references(this)
{
}

EAnnotation::~EAnnotation()
{
}

