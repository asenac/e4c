
#include "ConditionalDirective.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::ConditionalDirective include) START*/
/*PROTECTED REGION END*/

ConditionalDirective::ConditionalDirective()
{
	/*PROTECTED REGION ID(ConditionalDirective constructor) START*/
	/*PROTECTED REGION END*/
}

ConditionalDirective::~ConditionalDirective()
{
	/*PROTECTED REGION ID(ConditionalDirective destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::ConditionalDirective implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ConditionalDirective::eClassImpl() const
{
	return CodePackage::_instance()->getConditionalDirective();
}
 
