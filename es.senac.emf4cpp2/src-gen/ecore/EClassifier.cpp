
#include "EClassifier.hpp"
#include <ecore/EPackage.hpp>
#include <ecore/ETypeParameter.hpp>

using namespace ecore;

EClassifier::EClassifier() : instanceClassName(this), instanceClass(this), defaultValue(this), instanceTypeName(this), ePackage(this), eTypeParameters(this)
{
}

EClassifier::~EClassifier()
{
}

