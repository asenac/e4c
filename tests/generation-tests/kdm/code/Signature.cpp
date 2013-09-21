
#include "Signature.hpp"
#include <kdm/code/ParameterUnit.hpp>

using namespace kdm::code;

Signature::Signature() : 
	m_parameterUnit()
{
}

Signature::~Signature()
{
}

Signature::parameterUnit_t Signature::getParameterUnit() const
{
	return e4c::returned(m_parameterUnit);
}



