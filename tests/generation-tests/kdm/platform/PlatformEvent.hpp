
#ifndef EMF_CPP_KDM_PLATFORM_PLATFORMEVENT__HPP
#define EMF_CPP_KDM_PLATFORM_PLATFORMEVENT__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

#include <e4c/mapping.hpp>

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

	typedef ::kdm::core::String kind_t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;


	kind_t m_kind;

		
protected:

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PLATFORMEVENT__HPP
