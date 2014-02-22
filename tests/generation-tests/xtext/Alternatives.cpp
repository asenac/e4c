
#include "Alternatives.hpp"
#include <xtext/XtextPackage.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::Alternatives include) START*/
/*PROTECTED REGION END*/

Alternatives::Alternatives()
{
    /*PROTECTED REGION ID(Alternatives constructor) START*/
    /*PROTECTED REGION END*/
}

Alternatives::~Alternatives()
{
    /*PROTECTED REGION ID(Alternatives destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(xtext::Alternatives implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Alternatives::eClassImpl() const
{
    return XtextPackage::_instance()->getAlternatives();
}

