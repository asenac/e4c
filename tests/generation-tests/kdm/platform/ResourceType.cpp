
#include "ResourceType.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::ResourceType include) START*/
/*PROTECTED REGION END*/

ResourceType::ResourceType() :
    m_platformElement()
{
    /*PROTECTED REGION ID(ResourceType constructor) START*/
    /*PROTECTED REGION END*/
}

ResourceType::~ResourceType()
{
    /*PROTECTED REGION ID(ResourceType destructor) START*/
    /*PROTECTED REGION END*/
}

ResourceType::platformElement_t ResourceType::getPlatformElement() const
{
    return e4c::returned(m_platformElement);
}


void ResourceType::addPlatformElement(kdm::platform::AbstractPlatformElement_ptr platformElement_)
{
    m_platformElement.insert(std::unique_ptr < kdm::platform::AbstractPlatformElement >(platformElement_));
}

void ResourceType::addAllPlatformElement(const platformElement_t& platformElement_)
{
    for (auto i = platformElement_.begin(); i != platformElement_.end(); i++)
        addPlatformElement(*i);
}



/*PROTECTED REGION ID(kdm::platform::ResourceType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ResourceType::eClassImpl() const
{
    return PlatformPackage::_instance()->getResourceType();
}

