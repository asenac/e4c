
#ifndef EMF_CPP_KDM_PLATFORM_MARSHALLEDRESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_MARSHALLEDRESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/ResourceType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class MarshalledResource :  public virtual ::kdm::platform::ResourceType
{
public:

    typedef MarshalledResource_ptr ptr_type;

    MarshalledResource();
    virtual ~MarshalledResource();




    /*PROTECTED REGION ID(kdm::platform::MarshalledResource public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class PlatformPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::platform::MarshalledResource protected) START*/
    /*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_MARSHALLEDRESOURCE__HPP
