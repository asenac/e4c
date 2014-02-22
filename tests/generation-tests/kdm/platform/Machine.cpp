
#include "Machine.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/platform/DeployedComponent.hpp>
#include <kdm/platform/DeployedResource.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::Machine include) START*/
/*PROTECTED REGION END*/

Machine::Machine() :
    m_deployedComponent(),
    m_deployedResource()
{
    /*PROTECTED REGION ID(Machine constructor) START*/
    /*PROTECTED REGION END*/
}

Machine::~Machine()
{
    /*PROTECTED REGION ID(Machine destructor) START*/
    /*PROTECTED REGION END*/
}

Machine::deployedComponent_t Machine::getDeployedComponent() const
{
    return e4c::returned(m_deployedComponent);
}


void Machine::addDeployedComponent(kdm::platform::DeployedComponent_ptr deployedComponent_)
{
    m_deployedComponent.insert(std::unique_ptr < kdm::platform::DeployedComponent >(deployedComponent_));
}

void Machine::addAllDeployedComponent(const deployedComponent_t& deployedComponent_)
{
    for (auto i = deployedComponent_.begin(); i != deployedComponent_.end(); i++)
        addDeployedComponent(*i);
}

Machine::deployedResource_t Machine::getDeployedResource() const
{
    return e4c::returned(m_deployedResource);
}


void Machine::addDeployedResource(kdm::platform::DeployedResource_ptr deployedResource_)
{
    m_deployedResource.insert(std::unique_ptr < kdm::platform::DeployedResource >(deployedResource_));
}

void Machine::addAllDeployedResource(const deployedResource_t& deployedResource_)
{
    for (auto i = deployedResource_.begin(); i != deployedResource_.end(); i++)
        addDeployedResource(*i);
}



/*PROTECTED REGION ID(kdm::platform::Machine implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Machine::eClassImpl() const
{
    return PlatformPackage::_instance()->getMachine();
}

