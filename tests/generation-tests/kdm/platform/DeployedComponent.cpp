
#include "DeployedComponent.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/code/Module.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::DeployedComponent include) START*/
/*PROTECTED REGION END*/

DeployedComponent::DeployedComponent() :
    m_groupedCode()
{
    /*PROTECTED REGION ID(DeployedComponent constructor) START*/
    /*PROTECTED REGION END*/
}

DeployedComponent::~DeployedComponent()
{
    /*PROTECTED REGION ID(DeployedComponent destructor) START*/
    /*PROTECTED REGION END*/
}

DeployedComponent::groupedCode_t DeployedComponent::getGroupedCode() const
{
    return e4c::returned(m_groupedCode);
}

void DeployedComponent::addGroupedCode(kdm::code::Module_ptr groupedCode_)
{
    if (e4c::contains(m_groupedCode, groupedCode_))
        return;
    m_groupedCode.insert(groupedCode_);
}

void DeployedComponent::addAllGroupedCode(const groupedCode_t& groupedCode_)
{
    for (auto i = groupedCode_.begin(); i != groupedCode_.end(); i++)
        addGroupedCode(*i);
}



/*PROTECTED REGION ID(kdm::platform::DeployedComponent implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DeployedComponent::eClassImpl() const
{
    return PlatformPackage::_instance()->getDeployedComponent();
}

