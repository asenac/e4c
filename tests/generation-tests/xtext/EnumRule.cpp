
#include "EnumRule.hpp"
#include <xtext/XtextPackage.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::EnumRule include) START*/
/*PROTECTED REGION END*/

EnumRule::EnumRule()
{
	/*PROTECTED REGION ID(EnumRule constructor) START*/
	/*PROTECTED REGION END*/
}

EnumRule::~EnumRule()
{
	/*PROTECTED REGION ID(EnumRule destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(xtext::EnumRule implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EnumRule::eClassImpl() const
{
	return XtextPackage::_instance()->getEnumRule();
}
 
