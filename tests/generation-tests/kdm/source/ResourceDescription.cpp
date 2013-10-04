
#include "ResourceDescription.hpp"
#include <kdm/source/SourcePackage.hpp>

using namespace kdm::source;

/*PROTECTED REGION ID(kdm::source::ResourceDescription include) START*/
/*PROTECTED REGION END*/

ResourceDescription::ResourceDescription()
{
	/*PROTECTED REGION ID(ResourceDescription constructor) START*/
	/*PROTECTED REGION END*/
}

ResourceDescription::~ResourceDescription()
{
	/*PROTECTED REGION ID(ResourceDescription destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::source::ResourceDescription implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ResourceDescription::eClassImpl() const
{
	return SourcePackage::_instance()->getResourceDescription();
}
 
