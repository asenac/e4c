
#include "ArchitectureView.hpp"
#include <kdm/structure/StructurePackage.hpp>

using namespace kdm::structure;

/*PROTECTED REGION ID(kdm::structure::ArchitectureView include) START*/
/*PROTECTED REGION END*/

ArchitectureView::ArchitectureView()
{
	/*PROTECTED REGION ID(ArchitectureView constructor) START*/
	/*PROTECTED REGION END*/
}

ArchitectureView::~ArchitectureView()
{
	/*PROTECTED REGION ID(ArchitectureView destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::structure::ArchitectureView implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ArchitectureView::eClassImpl() const
{
	return StructurePackage::_instance()->getArchitectureView();
}
 
