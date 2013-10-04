
#include "NegatedToken.hpp"
#include <xtext/XtextPackage.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::NegatedToken include) START*/
/*PROTECTED REGION END*/

NegatedToken::NegatedToken()
{
	/*PROTECTED REGION ID(NegatedToken constructor) START*/
	/*PROTECTED REGION END*/
}

NegatedToken::~NegatedToken()
{
	/*PROTECTED REGION ID(NegatedToken destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(xtext::NegatedToken implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr NegatedToken::eClassImpl() const
{
	return XtextPackage::_instance()->getNegatedToken();
}
 
