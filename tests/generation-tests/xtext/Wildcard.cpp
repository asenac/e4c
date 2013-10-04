
#include "Wildcard.hpp"
#include <xtext/XtextPackage.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::Wildcard include) START*/
/*PROTECTED REGION END*/

Wildcard::Wildcard()
{
	/*PROTECTED REGION ID(Wildcard constructor) START*/
	/*PROTECTED REGION END*/
}

Wildcard::~Wildcard()
{
	/*PROTECTED REGION ID(Wildcard destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(xtext::Wildcard implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Wildcard::eClassImpl() const
{
	return XtextPackage::_instance()->getWildcard();
}
 
