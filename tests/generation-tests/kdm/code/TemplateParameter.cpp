
#include "TemplateParameter.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::TemplateParameter include) START*/
/*PROTECTED REGION END*/

TemplateParameter::TemplateParameter()
{
	/*PROTECTED REGION ID(TemplateParameter constructor) START*/
	/*PROTECTED REGION END*/
}

TemplateParameter::~TemplateParameter()
{
	/*PROTECTED REGION ID(TemplateParameter destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::TemplateParameter implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TemplateParameter::eClassImpl() const
{
	return CodePackage::_instance()->getTemplateParameter();
}
 
