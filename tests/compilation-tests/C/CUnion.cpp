
#include "CUnion.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CUnion include) START*/
/*PROTECTED REGION END*/

CUnion::CUnion()
{
    /*PROTECTED REGION ID(CUnion constructor) START*/
    /*PROTECTED REGION END*/
}

CUnion::~CUnion()
{
    /*PROTECTED REGION ID(CUnion destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CUnion implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CUnion::eClassImpl() const
{
    return CPackage::_instance()->getCUnion();
}

