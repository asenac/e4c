
#include "Subsystem.hpp"
#include <kdm/structure/StructurePackage.hpp>

using namespace kdm::structure;

/*PROTECTED REGION ID(kdm::structure::Subsystem include) START*/
/*PROTECTED REGION END*/

Subsystem::Subsystem()
{
	/*PROTECTED REGION ID(Subsystem constructor) START*/
	/*PROTECTED REGION END*/
}

Subsystem::~Subsystem()
{
	/*PROTECTED REGION ID(Subsystem destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::structure::Subsystem implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Subsystem::eClassImpl() const
{
	return StructurePackage::_instance()->getSubsystem();
}
 
