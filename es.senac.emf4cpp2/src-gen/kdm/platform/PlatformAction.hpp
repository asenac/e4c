
#ifndef EMF_CPP_KDM_PLATFORM_PLATFORMACTION__HPP
#define EMF_CPP_KDM_PLATFORM_PLATFORMACTION__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::PlatformAction
class PlatformAction :  public virtual ::kdm::platform::AbstractPlatformElement
{
public:

	typedef PlatformAction_ptr ptr_type;

	PlatformAction();
	virtual ~PlatformAction();

	// Typedefs
	typedef ::e4c::impl::attribute< PlatformAction__kind_tag > _kind_t;
	typedef ::e4c::impl::reference< PlatformAction__platformElement_tag > _platformElement_t;

	
	// Members
	_kind_t kind;
	_platformElement_t platformElement;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PLATFORMACTION__HPP
