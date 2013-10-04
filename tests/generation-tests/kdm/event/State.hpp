
#ifndef EMF_CPP_KDM_EVENT_STATE__HPP
#define EMF_CPP_KDM_EVENT_STATE__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/EventResource.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


class State :  public virtual ::kdm::event::EventResource
{
public:

	typedef State_ptr ptr_type;
	
	State();
	virtual ~State();

	
	

	/*PROTECTED REGION ID(kdm::event::State public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EventPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::event::State protected) START*/
	/*PROTECTED REGION END*/
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_STATE__HPP
