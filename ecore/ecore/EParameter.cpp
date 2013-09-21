
#include "EParameter.hpp"
#include <ecore/EOperation.hpp>

using namespace ecore;

EParameter::EParameter() : 
	m_eOperation()
{
}

EParameter::~EParameter()
{
}

EParameter::eOperation_t EParameter::getEOperation() const
{
	return e4c::returned(m_eOperation);
}


void EParameter::setEOperation(eOperation_t eOperation_)
{
	m_eOperation = eOperation_;
}




