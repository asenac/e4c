
#include "CDataType.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CDataType include) START*/
/*PROTECTED REGION END*/

CDataType::CDataType()
{
    /*PROTECTED REGION ID(CDataType constructor) START*/
    /*PROTECTED REGION END*/
}

CDataType::~CDataType()
{
    /*PROTECTED REGION ID(CDataType destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CDataType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CDataType::eClassImpl() const
{
    return CPackage::_instance()->getCDataType();
}

