
#include "CParameter.hpp"
#include <C/BehavioralFeature.hpp>

using namespace C;

CParameter::CParameter() : 
	m_behavioralFeature()
{
}

CParameter::~CParameter()
{
}

CParameter::behavioralFeature_t CParameter::getBehavioralFeature() const
{
	return e4c::returned(m_behavioralFeature);
}



