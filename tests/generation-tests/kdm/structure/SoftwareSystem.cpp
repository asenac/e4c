
#include "SoftwareSystem.hpp"
#include <kdm/structure/StructurePackage.hpp>

using namespace kdm::structure;

/*PROTECTED REGION ID(kdm::structure::SoftwareSystem include) START*/
/*PROTECTED REGION END*/

SoftwareSystem::SoftwareSystem()
{
	/*PROTECTED REGION ID(SoftwareSystem constructor) START*/
	/*PROTECTED REGION END*/
}

SoftwareSystem::~SoftwareSystem()
{
	/*PROTECTED REGION ID(SoftwareSystem destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::structure::SoftwareSystem implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr SoftwareSystem::eClassImpl() const
{
	return StructurePackage::_instance()->getSoftwareSystem();
}
 
