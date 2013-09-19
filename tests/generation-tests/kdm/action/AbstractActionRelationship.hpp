
#ifndef EMF_CPP_KDM_ACTION_ABSTRACTACTIONRELATIONSHIP__HPP
#define EMF_CPP_KDM_ACTION_ABSTRACTACTIONRELATIONSHIP__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/core/KDMRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


// kdm::action::AbstractActionRelationship
class AbstractActionRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

	typedef AbstractActionRelationship_ptr ptr_type;
	
	virtual ~AbstractActionRelationship();

	
	
	
	
protected:
	AbstractActionRelationship();

	
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_ABSTRACTACTIONRELATIONSHIP__HPP
