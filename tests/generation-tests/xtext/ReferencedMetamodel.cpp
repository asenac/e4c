
#include "ReferencedMetamodel.hpp"
#include <xtext/XtextPackage.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::ReferencedMetamodel include) START*/
/*PROTECTED REGION END*/

ReferencedMetamodel::ReferencedMetamodel()
{
    /*PROTECTED REGION ID(ReferencedMetamodel constructor) START*/
    /*PROTECTED REGION END*/
}

ReferencedMetamodel::~ReferencedMetamodel()
{
    /*PROTECTED REGION ID(ReferencedMetamodel destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(xtext::ReferencedMetamodel implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ReferencedMetamodel::eClassImpl() const
{
    return XtextPackage::_instance()->getReferencedMetamodel();
}

