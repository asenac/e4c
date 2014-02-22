
#include "UntilToken.hpp"
#include <xtext/XtextPackage.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::UntilToken include) START*/
/*PROTECTED REGION END*/

UntilToken::UntilToken()
{
    /*PROTECTED REGION ID(UntilToken constructor) START*/
    /*PROTECTED REGION END*/
}

UntilToken::~UntilToken()
{
    /*PROTECTED REGION ID(UntilToken destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(xtext::UntilToken implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UntilToken::eClassImpl() const
{
    return XtextPackage::_instance()->getUntilToken();
}

