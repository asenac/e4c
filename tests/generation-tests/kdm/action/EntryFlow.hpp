
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

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_ENTRYFLOW__HPP
