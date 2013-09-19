
#ifndef EMF_CPP_KDM_PLATFORM_PLATFORMMODEL__HPP
#define EMF_CPP_KDM_PLATFORM_PLATFORMMODEL__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>

#include <e4c/mapping.hpp>

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

	typedef boost::ptr_set < kdm::platform::AbstractPlatformElement > platformElement_t;

	
	// TODO

	
protected:

	platformElement_t m_platformElement;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PLATFORMMODEL__HPP
