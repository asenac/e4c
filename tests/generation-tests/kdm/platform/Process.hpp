
#ifndef EMF_CPP_KDM_PLATFORM_PROCESS__HPP
#define EMF_CPP_KDM_PLATFORM_PROCESS__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/RuntimeResource.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class Process :  public virtual ::kdm::platform::RuntimeResource
{
public:

    typedef Process_ptr ptr_type;

    Process();
    virtual ~Process();




    /*PROTECTED REGION ID(kdm::platform::Process public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class PlatformPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::platform::Process protected) START*/
    /*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PROCESS__HPP
