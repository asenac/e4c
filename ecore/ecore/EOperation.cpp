
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

EOperation::eContainingClass_t EOperation::getEContainingClass() const
{
	return e4c::returned(m_eContainingClass);
}

void EOperation::setEContainingClass(eContainingClass_t eContainingClass_)
{
	m_eContainingClass = eContainingClass_;
}


EOperation::eTypeParameters_t EOperation::getETypeParameters() const
{
	return e4c::returned(m_eTypeParameters);
}

void EOperation::addETypeParameters(ecore::ETypeParameter_ptr eTypeParameters_)
{
	m_eTypeParameters.push_back(std::unique_ptr < ecore::ETypeParameter >(eTypeParameters_));
}


EOperation::eParameters_t EOperation::getEParameters() const
{
	return e4c::returned(m_eParameters);
}

void EOperation::addEParameters(ecore::EParameter_ptr eParameters_)
{
	eParameters_->setEOperation(this);
	m_eParameters.push_back(std::unique_ptr < ecore::EParameter >(eParameters_));
}


EOperation::eExceptions_t EOperation::getEExceptions() const
{
	return e4c::returned(m_eExceptions);
}



EOperation::eGenericExceptions_t EOperation::getEGenericExceptions() const
{
	return e4c::returned(m_eGenericExceptions);
}

void EOperation::addEGenericExceptions(ecore::EGenericType_ptr eGenericExceptions_)
{
	m_eGenericExceptions.push_back(std::unique_ptr < ecore::EGenericType >(eGenericExceptions_));
}




