
#include "ConstantDefRef.hpp"
#include <idlmm/Constant.hpp>

using namespace idlmm;

ConstantDefRef::ConstantDefRef() : 
	m_constant()
{
}

ConstantDefRef::~ConstantDefRef()
{
}

ConstantDefRef::constant_t ConstantDefRef::getConstant() const
{
	return e4c::returned(m_constant);
}

void ConstantDefRef::setConstant(constant_t constant_)
{
	m_constant = constant_;
	
}





