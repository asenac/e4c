
#ifndef EMF_CPP_KDM_PLATFORM_LOADS__HPP
#define EMF_CPP_KDM_PLATFORM_LOADS__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


// kdm::platform::Loads
class Loads :  public virtual ::kdm::platform::AbstractPlatformRelationship
{
public:

	typedef Loads_ptr ptr_type;
	
	Loads();
	virtual ~Loads();

	typedef kdm::platform::DeployedComponent_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::platform::DeployedComponent_ptr m_to;
	kdm::action::ActionElement_ptr m_from;

		
protected:

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_LOADS__HPP
