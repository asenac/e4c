
#include "EOperation.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/ETypeParameter.hpp>
#include <ecore/EParameter.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::EOperation include) START*/
/*PROTECTED REGION END*/

EOperation::EOperation() : 
	m_eContainingClass(),
    m_eTypeParameters(),
    m_eParameters(),
    m_eExceptions(),
    m_eGenericExceptions()
{
	/*PROTECTED REGION ID(EOperation constructor) START*/
	/*PROTECTED REGION END*/
}

EOperation::~EOperation()
{
	/*PROTECTED REGION ID(EOperation destructor) START*/
	/*PROTECTED REGION END*/
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

void EOperation::addAllETypeParameters(const eTypeParameters_t& eTypeParameters_)
{
	for (auto i = eTypeParameters_.begin(); i != eTypeParameters_.end(); i++)
		addETypeParameters(*i);
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

void EOperation::addAllEParameters(const eParameters_t& eParameters_)
{
	for (auto i = eParameters_.begin(); i != eParameters_.end(); i++)
		addEParameters(*i);
}

EOperation::eExceptions_t EOperation::getEExceptions() const
{
	return e4c::returned(m_eExceptions);
}

void EOperation::addEExceptions(ecore::EClassifier_ptr eExceptions_)
{
	if (e4c::contains(m_eExceptions, eExceptions_))
		return;
	m_eExceptions.push_back(eExceptions_);
}

void EOperation::addAllEExceptions(const eExceptions_t& eExceptions_)
{
	for (auto i = eExceptions_.begin(); i != eExceptions_.end(); i++)
		addEExceptions(*i);
}

EOperation::eGenericExceptions_t EOperation::getEGenericExceptions() const
{
	return e4c::returned(m_eGenericExceptions);
}


void EOperation::addEGenericExceptions(ecore::EGenericType_ptr eGenericExceptions_)
{
	m_eGenericExceptions.push_back(std::unique_ptr < ecore::EGenericType >(eGenericExceptions_));
}

void EOperation::addAllEGenericExceptions(const eGenericExceptions_t& eGenericExceptions_)
{
	for (auto i = eGenericExceptions_.begin(); i != eGenericExceptions_.end(); i++)
		addEGenericExceptions(*i);
}


ecore::EInt EOperation::getOperationID()
{
	/*PROTECTED REGION ID(ecore::EInt EOperation::getOperationID) START*/
	return ecore::EInt();
	/*PROTECTED REGION END*/
}

ecore::EBoolean EOperation::isOverrideOf(ecore::EOperation_ptr someOperation)
{
	/*PROTECTED REGION ID(ecore::EBoolean EOperation::isOverrideOfecore::EOperation_ptr someOperation) START*/
	return ecore::EBoolean();
	/*PROTECTED REGION END*/
}


/*PROTECTED REGION ID(ecore::EOperation implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EOperation::eClassImpl() const
{
	return EcorePackage::_instance()->getEOperation();
}
 
