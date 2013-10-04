
#include "TemplateType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::TemplateType include) START*/
/*PROTECTED REGION END*/

TemplateType::TemplateType()
{
	/*PROTECTED REGION ID(TemplateType constructor) START*/
	/*PROTECTED REGION END*/
}

TemplateType::~TemplateType()
{
	/*PROTECTED REGION ID(TemplateType destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::TemplateType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TemplateType::eClassImpl() const
{
	return CodePackage::_instance()->getTemplateType();
}
 
