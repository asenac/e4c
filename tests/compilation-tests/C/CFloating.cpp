
#include "CFloating.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CFloating include) START*/
/*PROTECTED REGION END*/

CFloating::CFloating()
{
    /*PROTECTED REGION ID(CFloating constructor) START*/
    /*PROTECTED REGION END*/
}

CFloating::~CFloating()
{
    /*PROTECTED REGION ID(CFloating destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CFloating implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CFloating::eClassImpl() const
{
    return CPackage::_instance()->getCFloating();
}

