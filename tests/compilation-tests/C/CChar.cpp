
#include "CChar.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CChar include) START*/
/*PROTECTED REGION END*/

CChar::CChar()
{
    /*PROTECTED REGION ID(CChar constructor) START*/
    /*PROTECTED REGION END*/
}

CChar::~CChar()
{
    /*PROTECTED REGION ID(CChar destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CChar implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CChar::eClassImpl() const
{
    return CPackage::_instance()->getCChar();
}

