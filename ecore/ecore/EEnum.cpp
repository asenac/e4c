#include "EEnum.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EEnumLiteral.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::EEnum include) START*/
/*PROTECTED REGION END*/

EEnum::EEnum() : 
	m_eLiterals()
{
	/*PROTECTED REGION ID(EEnum constructor) START*/
	/*PROTECTED REGION END*/
}

EEnum::~EEnum()
{
	/*PROTECTED REGION ID(EEnum destructor) START*/
	/*PROTECTED REGION END*/
}

EEnum::eLiterals_t EEnum::getELiterals() const
{
	return e4c::returned(m_eLiterals);
}

void EEnum::addELiterals(ecore::EEnumLiteral_ptr eLiterals_)
{
	assert(eLiterals_);
	eLiterals_->setEEnum(this);
	m_eLiterals.push_back(std::unique_ptr < ecore::EEnumLiteral >(eLiterals_));
}

void EEnum::addAllELiterals(const eLiterals_t& eLiterals_)
{
	for (auto i = eLiterals_.begin(); i != eLiterals_.end(); i++)
		addELiterals(*i);
}

void EEnum::removeELiterals(ecore::EEnumLiteral_ptr eLiterals_)
{
	assert(eLiterals_);
	e4c::remove(m_eLiterals, eLiterals_);
}

void EEnum::clearELiterals()
{
	m_eLiterals.clear();
}


ecore::EEnumLiteral_ptr EEnum::getEEnumLiteral(ecore::EString name)
{
	/*PROTECTED REGION ID(ecore::EEnumLiteral_ptr EEnum::getEEnumLiteralecore::EString name) START*/
	return ecore::EEnumLiteral_ptr();
	/*PROTECTED REGION END*/
}

ecore::EEnumLiteral_ptr EEnum::getEEnumLiteral(ecore::EInt value)
{
	/*PROTECTED REGION ID(ecore::EEnumLiteral_ptr EEnum::getEEnumLiteralecore::EInt value) START*/
	return ecore::EEnumLiteral_ptr();
	/*PROTECTED REGION END*/
}

ecore::EEnumLiteral_ptr EEnum::getEEnumLiteralByLiteral(ecore::EString literal)
{
	/*PROTECTED REGION ID(ecore::EEnumLiteral_ptr EEnum::getEEnumLiteralByLiteralecore::EString literal) START*/
	return ecore::EEnumLiteral_ptr();
	/*PROTECTED REGION END*/
}


/*PROTECTED REGION ID(ecore::EEnum implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EEnum::eClassImpl() const
{
	return EcorePackage::_instance()->getEEnum();
}
 
