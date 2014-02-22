
#ifndef EMF_CPP_KDM_PLATFORM_DATAMANAGER__HPP
#define EMF_CPP_KDM_PLATFORM_DATAMANAGER__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/ResourceType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class DataManager :  public virtual ::kdm::platform::ResourceType
{
public:

    typedef DataManager_ptr ptr_type;

    DataManager();
    virtual ~DataManager();




    /*PROTECTED REGION ID(kdm::platform::DataManager public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class PlatformPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::platform::DataManager protected) START*/
    /*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_DATAMANAGER__HPP
