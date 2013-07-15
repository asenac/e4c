
#ifndef EMF_CPP_KDM_ACTION_GUARDEDFLOW__HPP
#define EMF_CPP_KDM_ACTION_GUARDEDFLOW__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/ControlFlow.hpp>


namespace kdm
{
namespace action
{


// kdm::action::GuardedFlow
class GuardedFlow :  public virtual ::kdm::action::ControlFlow
{
public:

	typedef GuardedFlow_ptr ptr_type;

	GuardedFlow();
	virtual ~GuardedFlow();

	// Typedefs
	
	
	// Members
	
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_GUARDEDFLOW__HPP
