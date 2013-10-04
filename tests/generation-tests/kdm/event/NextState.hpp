
#ifndef EMF_CPP_KDM_EVENT_NEXTSTATE__HPP
#define EMF_CPP_KDM_EVENT_NEXTSTATE__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/AbstractEventRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


class NextState :  public virtual ::kdm::event::AbstractEventRelationship
{
public:

	typedef NextState_ptr ptr_type;
	
	NextState();
	virtual ~NextState();

	typedef kdm::event::State_ptr to_t;
	typedef kdm::event::Transition_ptr from_t;
	
	to_t getTo() const;
	void setTo(to_t to_);
	from_t getFrom() const;
	void setFrom(from_t from_);
	

	/*PROTECTED REGION ID(kdm::event::NextState public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EventPackage;

	kdm::event::State_ptr m_to;
	kdm::event::Transition_ptr m_from;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::event::NextState protected) START*/
	/*PROTECTED REGION END*/
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_NEXTSTATE__HPP
