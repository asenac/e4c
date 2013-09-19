
#ifndef EMF_CPP_KDM_ACTION_ACTIONRELATIONSHIP__HPP
#define EMF_CPP_KDM_ACTION_ACTIONRELATIONSHIP__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


// kdm::action::ActionRelationship
class ActionRelationship :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ActionRelationship_ptr ptr_type;
	
	ActionRelationship();
	virtual ~ActionRelationship();

	typedef kdm::core::KDMEntity_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_ACTIONRELATIONSHIP__HPP
