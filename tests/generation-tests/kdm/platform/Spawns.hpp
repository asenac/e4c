
#ifndef EMF_CPP_KDM_PLATFORM_SPAWNS__HPP
#define EMF_CPP_KDM_PLATFORM_SPAWNS__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


// kdm::platform::Spawns
class Spawns :  public virtual ::kdm::platform::AbstractPlatformRelationship
{
public:

	typedef Spawns_ptr ptr_type;
	
	Spawns();
	virtual ~Spawns();

	typedef kdm::platform::RuntimeResource_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::platform::RuntimeResource_ptr m_to;
	kdm::action::ActionElement_ptr m_from;

		
protected:

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_SPAWNS__HPP
