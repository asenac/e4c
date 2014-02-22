
#include "CStruct.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CStruct include) START*/
/*PROTECTED REGION END*/

CStruct::CStruct()
{
    /*PROTECTED REGION ID(CStruct constructor) START*/
    /*PROTECTED REGION END*/
}

CStruct::~CStruct()
{
    /*PROTECTED REGION ID(CStruct destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CStruct implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CStruct::eClassImpl() const
{
    return CPackage::_instance()->getCStruct();
}

