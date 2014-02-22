
#include "ExecutionResource.hpp"
#include <kdm/platform/PlatformPackage.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::ExecutionResource include) START*/
/*PROTECTED REGION END*/

ExecutionResource::ExecutionResource()
{
    /*PROTECTED REGION ID(ExecutionResource constructor) START*/
    /*PROTECTED REGION END*/
}

ExecutionResource::~ExecutionResource()
{
    /*PROTECTED REGION ID(ExecutionResource destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::platform::ExecutionResource implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ExecutionResource::eClassImpl() const
{
    return PlatformPackage::_instance()->getExecutionResource();
}

