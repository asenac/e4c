
#include "CParameter.hpp"
#include <C/CPackage.hpp>
#include <C/BehavioralFeature.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CParameter include) START*/
/*PROTECTED REGION END*/

CParameter::CParameter() : 
	m_behavioralFeature()
{
	/*PROTECTED REGION ID(CParameter constructor) START*/
	/*PROTECTED REGION END*/
}

CParameter::~CParameter()
{
	/*PROTECTED REGION ID(CParameter destructor) START*/
	/*PROTECTED REGION END*/
}

CParameter::behavioralFeature_t CParameter::getBehavioralFeature() const
{
	return e4c::returned(m_behavioralFeature);
}

void CParameter::setBehavioralFeature(behavioralFeature_t behavioralFeature_)
{
	m_behavioralFeature = behavioralFeature_;
}



/*PROTECTED REGION ID(C::CParameter implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CParameter::eClassImpl() const
{
	return CPackage::_instance()->getCParameter();
}
 
