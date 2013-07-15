
#ifndef EMF_CPP_KDM_ACTION_FALSEFLOW__HPP
#define EMF_CPP_KDM_ACTION_FALSEFLOW__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/ControlFlow.hpp>


namespace kdm
{
namespace action
{


// kdm::action::FalseFlow
class FalseFlow :  public virtual ::kdm::action::ControlFlow
{
public:

	typedef FalseFlow_ptr ptr_type;

	FalseFlow();
	virtual ~FalseFlow();

	// Typedefs
	
	
	// Members
	
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_FALSEFLOW__HPP