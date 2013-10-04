
#include "Signature.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/ParameterUnit.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::Signature include) START*/
/*PROTECTED REGION END*/

Signature::Signature() : 
	m_parameterUnit()
{
	/*PROTECTED REGION ID(Signature constructor) START*/
	/*PROTECTED REGION END*/
}

Signature::~Signature()
{
	/*PROTECTED REGION ID(Signature destructor) START*/
	/*PROTECTED REGION END*/
}

Signature::parameterUnit_t Signature::getParameterUnit() const
{
	return e4c::returned(m_parameterUnit);
}


void Signature::addParameterUnit(kdm::code::ParameterUnit_ptr parameterUnit_)
{
	m_parameterUnit.push_back(std::unique_ptr < kdm::code::ParameterUnit >(parameterUnit_));
}

void Signature::addAllParameterUnit(const parameterUnit_t& parameterUnit_)
{
	for (auto i = parameterUnit_.begin(); i != parameterUnit_.end(); i++)
		addParameterUnit(*i);
}



/*PROTECTED REGION ID(kdm::code::Signature implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Signature::eClassImpl() const
{
	return CodePackage::_instance()->getSignature();
}
 
