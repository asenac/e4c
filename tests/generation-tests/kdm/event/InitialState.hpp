
#ifndef EMF_CPP_KDM_EVENT_INITIALSTATE__HPP
#define EMF_CPP_KDM_EVENT_INITIALSTATE__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/State.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


class InitialState :  public virtual ::kdm::event::State
{
public:

	typedef InitialState_ptr ptr_type;
	
	InitialState();
	virtual ~InitialState();

	
	

	/*PROTECTED REGION ID(kdm::event::InitialState public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EventPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::event::InitialState protected) START*/
	/*PROTECTED REGION END*/
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_INITIALSTATE__HPP
