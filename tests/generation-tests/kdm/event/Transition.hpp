
#ifndef EMF_CPP_KDM_EVENT_TRANSITION__HPP
#define EMF_CPP_KDM_EVENT_TRANSITION__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/EventResource.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


class Transition :  public virtual ::kdm::event::EventResource
{
public:

	typedef Transition_ptr ptr_type;
	
	Transition();
	virtual ~Transition();

	
	

	/*PROTECTED REGION ID(kdm::event::Transition public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EventPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::event::Transition protected) START*/
	/*PROTECTED REGION END*/
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_TRANSITION__HPP
