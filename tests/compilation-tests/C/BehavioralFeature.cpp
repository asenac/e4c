
#include "BehavioralFeature.hpp"
#include <C/CParameter.hpp>

using namespace C;

BehavioralFeature::BehavioralFeature() : 
	m_parameters()
{
}

BehavioralFeature::~BehavioralFeature()
{
}

BehavioralFeature::parameters_t BehavioralFeature::getParameters() const
{
	return e4c::returned(m_parameters);
}



