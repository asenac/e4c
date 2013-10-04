
#ifndef EMF_CPP_KDM_EVENT_EVENT__HPP
#define EMF_CPP_KDM_EVENT_EVENT__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/AbstractEventElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


class Event :  public virtual ::kdm::event::AbstractEventElement
{
public:

	typedef Event_ptr ptr_type;
	
	Event();
	virtual ~Event();

	typedef ::kdm::core::String kind_t;
	
	void setKind(kind_t _kind);
	kind_t getKind() const;
	

	/*PROTECTED REGION ID(kdm::event::Event public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EventPackage;

	kind_t m_kind;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::event::Event protected) START*/
	/*PROTECTED REGION END*/
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENT__HPP
