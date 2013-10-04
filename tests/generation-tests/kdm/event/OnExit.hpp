
#ifndef EMF_CPP_KDM_EVENT_ONEXIT__HPP
#define EMF_CPP_KDM_EVENT_ONEXIT__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/Transition.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


class OnExit :  public virtual ::kdm::event::Transition
{
public:

	typedef OnExit_ptr ptr_type;
	
	OnExit();
	virtual ~OnExit();

	
	

	/*PROTECTED REGION ID(kdm::event::OnExit public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EventPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::event::OnExit protected) START*/
	/*PROTECTED REGION END*/
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_ONEXIT__HPP
