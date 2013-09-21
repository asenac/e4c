
#ifndef EMF_CPP_KDM_PLATFORM_REQUIRES__HPP
#define EMF_CPP_KDM_PLATFORM_REQUIRES__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


// kdm::platform::Requires
class Requires :  public virtual ::kdm::platform::AbstractPlatformRelationship
{
public:

	typedef Requires_ptr ptr_type;
	
	Requires();
	virtual ~Requires();

	typedef kdm::platform::AbstractPlatformElement_ptr to_t;
	typedef kdm::platform::DeployedComponent_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::platform::AbstractPlatformElement_ptr m_to;
	kdm::platform::DeployedComponent_ptr m_from;

		
protected:

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_REQUIRES__HPP
