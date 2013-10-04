
#include "ModelElement.hpp"
#include <idlmm/IdlmmPackage.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::ModelElement include) START*/
/*PROTECTED REGION END*/

ModelElement::ModelElement()
{
	/*PROTECTED REGION ID(ModelElement constructor) START*/
	/*PROTECTED REGION END*/
}

ModelElement::~ModelElement()
{
	/*PROTECTED REGION ID(ModelElement destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(idlmm::ModelElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ModelElement::eClassImpl() const
{
	return IdlmmPackage::_instance()->getModelElement();
}
 
