
#ifndef EMF_CPP_KDM_ACTION_FLOW__HPP
#define EMF_CPP_KDM_ACTION_FLOW__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/ControlFlow.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


class Flow :  public virtual ::kdm::action::ControlFlow
{
public:

	typedef Flow_ptr ptr_type;
	
	Flow();
	virtual ~Flow();

	
	

	/*PROTECTED REGION ID(kdm::action::Flow public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ActionPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::action::Flow protected) START*/
	/*PROTECTED REGION END*/
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_FLOW__HPP
