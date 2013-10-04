
#include "Component.hpp"
#include <kdm/structure/StructurePackage.hpp>

using namespace kdm::structure;

/*PROTECTED REGION ID(kdm::structure::Component include) START*/
/*PROTECTED REGION END*/

Component::Component()
{
	/*PROTECTED REGION ID(Component constructor) START*/
	/*PROTECTED REGION END*/
}

Component::~Component()
{
	/*PROTECTED REGION ID(Component destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::structure::Component implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Component::eClassImpl() const
{
	return StructurePackage::_instance()->getComponent();
}
 
