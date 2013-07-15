
#ifndef EMF_CPP_KDM_EVENT_ABSTRACTEVENTRELATIONSHIP__HPP
#define EMF_CPP_KDM_EVENT_ABSTRACTEVENTRELATIONSHIP__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/core/KDMRelationship.hpp>


namespace kdm
{
namespace event
{


// kdm::event::AbstractEventRelationship
class AbstractEventRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

	typedef AbstractEventRelationship_ptr ptr_type;

	AbstractEventRelationship();
	virtual ~AbstractEventRelationship();

	// Typedefs
	
	
	// Members
	
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_ABSTRACTEVENTRELATIONSHIP__HPP