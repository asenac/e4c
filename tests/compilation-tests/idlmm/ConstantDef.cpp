
#include "ConstantDef.hpp"
#include <idlmm/Expression.hpp>

using namespace idlmm;

ConstantDef::ConstantDef() : 
	m_constValue()
{
}

ConstantDef::~ConstantDef()
{
}

ConstantDef::constValue_t ConstantDef::getConstValue() const
{
	return e4c::returned(m_constValue);
}


void ConstantDef::setConstValue(constValue_t constValue_)
{
	m_constValue.reset(constValue_);
}

ConstantDef::constValue_t ConstantDef::releaseConstValue()
{
	return m_constValue.release();
}





