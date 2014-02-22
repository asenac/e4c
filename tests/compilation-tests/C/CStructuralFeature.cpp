
#include "CStructuralFeature.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CStructuralFeature include) START*/
/*PROTECTED REGION END*/

CStructuralFeature::CStructuralFeature()
{
    /*PROTECTED REGION ID(CStructuralFeature constructor) START*/
    /*PROTECTED REGION END*/
}

CStructuralFeature::~CStructuralFeature()
{
    /*PROTECTED REGION ID(CStructuralFeature destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CStructuralFeature implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CStructuralFeature::eClassImpl() const
{
    return CPackage::_instance()->getCStructuralFeature();
}

