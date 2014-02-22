#include "AliasDef.hpp"
#include <idlmm/IdlmmPackage.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::AliasDef include) START*/
/*PROTECTED REGION END*/

AliasDef::AliasDef()
{
    /*PROTECTED REGION ID(AliasDef constructor) START*/
    /*PROTECTED REGION END*/
}

AliasDef::~AliasDef()
{
    /*PROTECTED REGION ID(AliasDef destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(idlmm::AliasDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AliasDef::eClassImpl() const
{
    return IdlmmPackage::_instance()->getAliasDef();
}

