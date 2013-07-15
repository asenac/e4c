
#include "EOperation.hpp"
#include <ecore/EClass.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>

using namespace ecore;

EOperation::EOperation() : eContainingClass(this), eTypeParameters(this), eParameters(this), eExceptions(this), eGenericExceptions(this)
{
}

EOperation::~EOperation()
{
}

