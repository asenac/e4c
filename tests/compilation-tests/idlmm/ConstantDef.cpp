
#include "ConstantDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Expression.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::ConstantDef include) START*/
/*PROTECTED REGION END*/

ConstantDef::ConstantDef() : 
	m_constValue()
{
	/*PROTECTED REGION ID(ConstantDef constructor) START*/
	/*PROTECTED REGION END*/
}

ConstantDef::~ConstantDef()
{
	/*PROTECTED REGION ID(ConstantDef destructor) START*/
	/*PROTECTED REGION END*/
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



/*PROTECTED REGION ID(idlmm::ConstantDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ConstantDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getConstantDef();
}
 
