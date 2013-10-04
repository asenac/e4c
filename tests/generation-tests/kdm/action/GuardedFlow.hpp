
#ifndef EMF_CPP_KDM_ACTION_GUARDEDFLOW__HPP
#define EMF_CPP_KDM_ACTION_GUARDEDFLOW__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/ControlFlow.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


class GuardedFlow :  public virtual ::kdm::action::ControlFlow
{
public:

	typedef GuardedFlow_ptr ptr_type;
	
	GuardedFlow();
	virtual ~GuardedFlow();

	
	

	/*PROTECTED REGION ID(kdm::action::GuardedFlow public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ActionPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::action::GuardedFlow protected) START*/
	/*PROTECTED REGION END*/
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_GUARDEDFLOW__HPP
