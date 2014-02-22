
#ifndef EMF_CPP_KDM_PLATFORM_DEPLOYEDRESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_DEPLOYEDRESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class DeployedResource :  public virtual ::kdm::platform::AbstractPlatformElement
{
public:

    typedef DeployedResource_ptr ptr_type;

    DeployedResource();
    virtual ~DeployedResource();

    typedef std::set < kdm::platform::ResourceType_ptr > platformElement_t;

    platformElement_t getPlatformElement() const;
    void addPlatformElement(kdm::platform::ResourceType_ptr platformElement_);
    void addAllPlatformElement(const platformElement_t& platformElement_);


    /*PROTECTED REGION ID(kdm::platform::DeployedResource public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class PlatformPackage;

    std::set < std::unique_ptr < kdm::platform::ResourceType > > m_platformElement;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::platform::DeployedResource protected) START*/
    /*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_DEPLOYEDRESOURCE__HPP
