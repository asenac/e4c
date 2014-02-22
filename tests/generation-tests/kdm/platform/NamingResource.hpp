
#ifndef EMF_CPP_KDM_PLATFORM_NAMINGRESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_NAMINGRESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/ResourceType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class NamingResource :  public virtual ::kdm::platform::ResourceType
{
public:

    typedef NamingResource_ptr ptr_type;

    NamingResource();
    virtual ~NamingResource();




    /*PROTECTED REGION ID(kdm::platform::NamingResource public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class PlatformPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::platform::NamingResource protected) START*/
    /*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_NAMINGRESOURCE__HPP
