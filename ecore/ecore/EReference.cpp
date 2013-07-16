
#include "EReference.hpp"
#include <ecore/EReference.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>

using namespace ecore;

EReference::EReference() : containment(this), container(this), resolveProxies(this), eOpposite(this), eReferenceType(this), eKeys(this)
{
}

EReference::~EReference()
{
}

