
#ifndef EMF_CPP_KDM_PLATFORM_RUNTIMERESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_RUNTIMERESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/ResourceType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class RuntimeResource :  public virtual ::kdm::platform::ResourceType
{
public:

    typedef RuntimeResource_ptr ptr_type;

    RuntimeResource();
    virtual ~RuntimeResource();




    /*PROTECTED REGION ID(kdm::platform::RuntimeResource public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class PlatformPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::platform::RuntimeResource protected) START*/
    /*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_RUNTIMERESOURCE__HPP
