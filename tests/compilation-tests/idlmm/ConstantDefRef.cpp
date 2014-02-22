#include "ConstantDefRef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Constant.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::ConstantDefRef include) START*/
/*PROTECTED REGION END*/

ConstantDefRef::ConstantDefRef() :
    m_constant()
{
    /*PROTECTED REGION ID(ConstantDefRef constructor) START*/
    /*PROTECTED REGION END*/
}

ConstantDefRef::~ConstantDefRef()
{
    /*PROTECTED REGION ID(ConstantDefRef destructor) START*/
    /*PROTECTED REGION END*/
}

ConstantDefRef::constant_t ConstantDefRef::getConstant() const
{
    return e4c::returned(m_constant);
}
void ConstantDefRef::setConstant(constant_t constant_)
{
    if (m_constant == constant_)
        return;
    m_constant = constant_;
}



/*PROTECTED REGION ID(idlmm::ConstantDefRef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ConstantDefRef::eClassImpl() const
{
    return IdlmmPackage::_instance()->getConstantDefRef();
}

