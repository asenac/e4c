
#include "EGenericType.hpp"
#include <ecore/EGenericType.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/ETypeParameter.hpp>

using namespace ecore;

EGenericType::EGenericType() : eUpperBound(this), eTypeArguments(this), eRawType(this), eLowerBound(this), eTypeParameter(this), eClassifier(this)
{
}

EGenericType::~EGenericType()
{
}

