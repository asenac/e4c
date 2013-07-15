
#ifndef EMF_CPP_KDM_PLATFORM_DATAMANAGER__HPP
#define EMF_CPP_KDM_PLATFORM_DATAMANAGER__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/ResourceType.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::DataManager
class DataManager :  public virtual ::kdm::platform::ResourceType
{
public:

	typedef DataManager_ptr ptr_type;

	DataManager();
	virtual ~DataManager();

	// Typedefs
	
	
	// Members
	
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_DATAMANAGER__HPP
