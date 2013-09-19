
#ifndef EMF_CPP_KDM_PLATFORM_PLATFORMACTION__HPP
#define EMF_CPP_KDM_PLATFORM_PLATFORMACTION__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

#include <e4c/mapping.hpp>

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

	typedef int kind_t;
	typedef boost::ptr_set < kdm::platform::PlatformEvent > platformElement_t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;
	// TODO

	
protected:

	kind_t m_kind;
	platformElement_t m_platformElement;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PLATFORMACTION__HPP
