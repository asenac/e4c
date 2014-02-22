
#include "CFloat.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CFloat include) START*/
/*PROTECTED REGION END*/

CFloat::CFloat()
{
    /*PROTECTED REGION ID(CFloat constructor) START*/
    /*PROTECTED REGION END*/
}

CFloat::~CFloat()
{
    /*PROTECTED REGION ID(CFloat destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CFloat implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CFloat::eClassImpl() const
{
    return CPackage::_instance()->getCFloat();
}

