
#include "EStructuralFeature.hpp"
#include <ecore/EClass.hpp>

using namespace ecore;

EStructuralFeature::EStructuralFeature() : changeable(this), volatile_(this), transient(this), defaultValueLiteral(this), defaultValue(this), unsettable(this), derived(this), eContainingClass(this)
{
}

EStructuralFeature::~EStructuralFeature()
{
}

