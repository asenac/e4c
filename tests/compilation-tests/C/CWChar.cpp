
#include "CWChar.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CWChar include) START*/
/*PROTECTED REGION END*/

CWChar::CWChar()
{
    /*PROTECTED REGION ID(CWChar constructor) START*/
    /*PROTECTED REGION END*/
}

CWChar::~CWChar()
{
    /*PROTECTED REGION ID(CWChar destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CWChar implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CWChar::eClassImpl() const
{
    return CPackage::_instance()->getCWChar();
}

