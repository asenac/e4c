
#ifndef EMF_CPP_KDM_ACTION_FINALLYUNIT__HPP
#define EMF_CPP_KDM_ACTION_FINALLYUNIT__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/ExceptionUnit.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


class FinallyUnit :  public virtual ::kdm::action::ExceptionUnit
{
public:

	typedef FinallyUnit_ptr ptr_type;
	
	FinallyUnit();
	virtual ~FinallyUnit();

	
	

	/*PROTECTED REGION ID(kdm::action::FinallyUnit public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ActionPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::action::FinallyUnit protected) START*/
	/*PROTECTED REGION END*/
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_FINALLYUNIT__HPP
