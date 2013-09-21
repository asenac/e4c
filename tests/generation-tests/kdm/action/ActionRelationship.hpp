
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

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::core::KDMEntity_ptr m_to;
	kdm::action::ActionElement_ptr m_from;

		
protected:

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_ACTIONRELATIONSHIP__HPP
