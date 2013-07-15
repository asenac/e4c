
#include "EClass.hpp"
#include <ecore/EClass.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EGenericType.hpp>

using namespace ecore;

EClass::EClass() : abstract(this), interface(this), eSuperTypes(this), eOperations(this), eAllAttributes(this), eAllReferences(this), eReferences(this), eAttributes(this), eAllContainments(this), eAllOperations(this), eAllStructuralFeatures(this), eAllSuperTypes(this), eIDAttribute(this), eStructuralFeatures(this), eGenericSuperTypes(this), eAllGenericSuperTypes(this)
{
}

EClass::~EClass()
{
}

