
#ifndef EMF_CPP_KDM_EVENT_EVENTELEMENT__HPP
#define EMF_CPP_KDM_EVENT_EVENTELEMENT__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/AbstractEventElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


class EventElement :  public virtual ::kdm::event::AbstractEventElement
{
public:

	typedef EventElement_ptr ptr_type;
	
	EventElement();
	virtual ~EventElement();

	
	

	/*PROTECTED REGION ID(kdm::event::EventElement public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EventPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::event::EventElement protected) START*/
	/*PROTECTED REGION END*/
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENTELEMENT__HPP
