#include "Constant.hpp"
#include <idlmm/IdlmmPackage.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::Constant include) START*/
/*PROTECTED REGION END*/

Constant::Constant()
{
    /*PROTECTED REGION ID(Constant constructor) START*/
    /*PROTECTED REGION END*/
}

Constant::~Constant()
{
    /*PROTECTED REGION ID(Constant destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(idlmm::Constant implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Constant::eClassImpl() const
{
    return IdlmmPackage::_instance()->getConstant();
}

