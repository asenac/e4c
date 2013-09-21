
#include "ConstantDefRef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Constant.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::ConstantDefRef include) START*/
/*PROTECTED REGION END*/

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





/*PROTECTED REGION ID(idlmm::ConstantDefRef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ConstantDefRef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getConstantDefRef();
}
 
