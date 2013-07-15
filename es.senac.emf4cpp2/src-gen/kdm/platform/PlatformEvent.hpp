
#ifndef EMF_CPP_KDM_PLATFORM_PLATFORMEVENT__HPP
#define EMF_CPP_KDM_PLATFORM_PLATFORMEVENT__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::PlatformEvent
class PlatformEvent :  public virtual ::kdm::platform::AbstractPlatformElement
{
public:

	typedef PlatformEvent_ptr ptr_type;

	PlatformEvent();
	virtual ~PlatformEvent();

	// Typedefs
	typedef ::e4c::impl::attribute< PlatformEvent__kind_tag > _kind_t;

	
	// Members
	_kind_t kind;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PLATFORMEVENT__HPP
