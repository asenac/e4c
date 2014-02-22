
#include "CInt.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CInt include) START*/
/*PROTECTED REGION END*/

CInt::CInt()
{
    /*PROTECTED REGION ID(CInt constructor) START*/
    /*PROTECTED REGION END*/
}

CInt::~CInt()
{
    /*PROTECTED REGION ID(CInt destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CInt implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CInt::eClassImpl() const
{
    return CPackage::_instance()->getCInt();
}

