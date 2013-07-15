
#ifndef EMF_CPP_KDM_ACTION_ABSTRACTACTIONRELATIONSHIP__HPP
#define EMF_CPP_KDM_ACTION_ABSTRACTACTIONRELATIONSHIP__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/core/KDMRelationship.hpp>


namespace kdm
{
namespace action
{


// kdm::action::AbstractActionRelationship
class AbstractActionRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

	typedef AbstractActionRelationship_ptr ptr_type;

	AbstractActionRelationship();
	virtual ~AbstractActionRelationship();

	// Typedefs
	
	
	// Members
	
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_ABSTRACTACTIONRELATIONSHIP__HPP
