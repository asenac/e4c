
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


// kdm::event::Event
class Event :  public virtual ::kdm::event::AbstractEventElement
{
public:

	typedef Event_ptr ptr_type;
	
	Event();
	virtual ~Event();

	typedef int kind_t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;

	
protected:

	kind_t m_kind;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENT__HPP
