
#include "DeployedSoftwareSystem.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/platform/DeployedComponent.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::DeployedSoftwareSystem include) START*/
/*PROTECTED REGION END*/

DeployedSoftwareSystem::DeployedSoftwareSystem() : 
	m_groupedComponent()
{
	/*PROTECTED REGION ID(DeployedSoftwareSystem constructor) START*/
	/*PROTECTED REGION END*/
}

DeployedSoftwareSystem::~DeployedSoftwareSystem()
{
	/*PROTECTED REGION ID(DeployedSoftwareSystem destructor) START*/
	/*PROTECTED REGION END*/
}

DeployedSoftwareSystem::groupedComponent_t DeployedSoftwareSystem::getGroupedComponent() const
{
	return e4c::returned(m_groupedComponent);
}

void DeployedSoftwareSystem::addGroupedComponent(kdm::platform::DeployedComponent_ptr groupedComponent_)
{
	if (e4c::contains(m_groupedComponent, groupedComponent_))
		return;
	m_groupedComponent.insert(groupedComponent_);
}

void DeployedSoftwareSystem::addAllGroupedComponent(const groupedComponent_t& groupedComponent_)
{
	for (auto i = groupedComponent_.begin(); i != groupedComponent_.end(); i++)
		addGroupedComponent(*i);
}



/*PROTECTED REGION ID(kdm::platform::DeployedSoftwareSystem implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DeployedSoftwareSystem::eClassImpl() const
{
	return PlatformPackage::_instance()->getDeployedSoftwareSystem();
}
 
