
#include "Extent.hpp"
#include <emof/EmofPackage.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::Extent include) START*/
/*PROTECTED REGION END*/

Extent::Extent()
{
	/*PROTECTED REGION ID(Extent constructor) START*/
	/*PROTECTED REGION END*/
}

Extent::~Extent()
{
	/*PROTECTED REGION ID(Extent destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(emof::Extent implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Extent::eClassImpl() const
{
	return EmofPackage::_instance()->getExtent();
}
 
