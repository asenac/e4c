
#ifndef EMF_CPP_KDM_PLATFORM_PLATFORMMODEL__HPP
#define EMF_CPP_KDM_PLATFORM_PLATFORMMODEL__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::PlatformModel
class PlatformModel :  public virtual ::kdm::kdm::KDMModel
{
public:

	typedef PlatformModel_ptr ptr_type;

	PlatformModel();
	virtual ~PlatformModel();

	// Typedefs
	typedef ::e4c::impl::reference< PlatformModel__platformElement_tag > _platformElement_t;

	
	// Members
	_platformElement_t platformElement;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PLATFORMMODEL__HPP
