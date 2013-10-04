
#include "DeployedResource.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/platform/ResourceType.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::DeployedResource include) START*/
/*PROTECTED REGION END*/

DeployedResource::DeployedResource() : 
	m_platformElement()
{
	/*PROTECTED REGION ID(DeployedResource constructor) START*/
	/*PROTECTED REGION END*/
}

DeployedResource::~DeployedResource()
{
	/*PROTECTED REGION ID(DeployedResource destructor) START*/
	/*PROTECTED REGION END*/
}

DeployedResource::platformElement_t DeployedResource::getPlatformElement() const
{
	return e4c::returned(m_platformElement);
}


void DeployedResource::addPlatformElement(kdm::platform::ResourceType_ptr platformElement_)
{
	m_platformElement.insert(std::unique_ptr < kdm::platform::ResourceType >(platformElement_));
}

void DeployedResource::addAllPlatformElement(const platformElement_t& platformElement_)
{
	for (auto i = platformElement_.begin(); i != platformElement_.end(); i++)
		addPlatformElement(*i);
}



/*PROTECTED REGION ID(kdm::platform::DeployedResource implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DeployedResource::eClassImpl() const
{
	return PlatformPackage::_instance()->getDeployedResource();
}
 
