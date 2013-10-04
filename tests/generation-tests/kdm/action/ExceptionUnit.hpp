
#ifndef EMF_CPP_KDM_ACTION_EXCEPTIONUNIT__HPP
#define EMF_CPP_KDM_ACTION_EXCEPTIONUNIT__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/BlockUnit.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


class ExceptionUnit :  public virtual ::kdm::action::BlockUnit
{
public:

	typedef ExceptionUnit_ptr ptr_type;
	
	ExceptionUnit();
	virtual ~ExceptionUnit();

	
	

	/*PROTECTED REGION ID(kdm::action::ExceptionUnit public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ActionPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::action::ExceptionUnit protected) START*/
	/*PROTECTED REGION END*/
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_EXCEPTIONUNIT__HPP
