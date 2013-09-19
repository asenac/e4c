
#include "EOperation.hpp"
#include <ecore/EClass.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>

using namespace ecore;

EOperation::EOperation() : 
	m_eContainingClass(),
    m_eTypeParameters(),
    m_eParameters(),
    m_eExceptions(),
    m_eGenericExceptions()
{
}

EOperation::~EOperation()
{
}



