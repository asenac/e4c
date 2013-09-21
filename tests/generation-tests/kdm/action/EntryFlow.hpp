
#ifndef EMF_CPP_KDM_ACTION_ENTRYFLOW__HPP
#define EMF_CPP_KDM_ACTION_ENTRYFLOW__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


// kdm::action::EntryFlow
class EntryFlow :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef EntryFlow_ptr ptr_type;
	
	EntryFlow();
	virtual ~EntryFlow();

	typedef kdm::action::ActionElement_ptr to_t;
	typedef kdm::code::ControlElement_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::action::ActionElement_ptr m_to;
	kdm::code::ControlElement_ptr m_from;

		
protected:

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_ENTRYFLOW__HPP
