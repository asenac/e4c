
#include "CIntegral.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CIntegral include) START*/
/*PROTECTED REGION END*/

CIntegral::CIntegral()
{
    /*PROTECTED REGION ID(CIntegral constructor) START*/
    /*PROTECTED REGION END*/
}

CIntegral::~CIntegral()
{
    /*PROTECTED REGION ID(CIntegral destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CIntegral implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CIntegral::eClassImpl() const
{
    return CPackage::_instance()->getCIntegral();
}

