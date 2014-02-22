
#include "AbstractPlatformRelationship.hpp"
#include <kdm/platform/PlatformPackage.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::AbstractPlatformRelationship include) START*/
/*PROTECTED REGION END*/

AbstractPlatformRelationship::AbstractPlatformRelationship()
{
    /*PROTECTED REGION ID(AbstractPlatformRelationship constructor) START*/
    /*PROTECTED REGION END*/
}

AbstractPlatformRelationship::~AbstractPlatformRelationship()
{
    /*PROTECTED REGION ID(AbstractPlatformRelationship destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::platform::AbstractPlatformRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractPlatformRelationship::eClassImpl() const
{
    return PlatformPackage::_instance()->getAbstractPlatformRelationship();
}

