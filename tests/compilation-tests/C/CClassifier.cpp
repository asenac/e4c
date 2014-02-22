
#include "CClassifier.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CClassifier include) START*/
/*PROTECTED REGION END*/

CClassifier::CClassifier()
{
    /*PROTECTED REGION ID(CClassifier constructor) START*/
    /*PROTECTED REGION END*/
}

CClassifier::~CClassifier()
{
    /*PROTECTED REGION ID(CClassifier destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CClassifier implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CClassifier::eClassImpl() const
{
    return CPackage::_instance()->getCClassifier();
}

