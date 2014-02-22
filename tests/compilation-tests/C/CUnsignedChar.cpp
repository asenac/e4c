
#include "CUnsignedChar.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CUnsignedChar include) START*/
/*PROTECTED REGION END*/

CUnsignedChar::CUnsignedChar()
{
    /*PROTECTED REGION ID(CUnsignedChar constructor) START*/
    /*PROTECTED REGION END*/
}

CUnsignedChar::~CUnsignedChar()
{
    /*PROTECTED REGION ID(CUnsignedChar destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CUnsignedChar implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CUnsignedChar::eClassImpl() const
{
    return CPackage::_instance()->getCUnsignedChar();
}

