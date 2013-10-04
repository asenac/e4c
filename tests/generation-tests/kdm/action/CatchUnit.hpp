
#ifndef EMF_CPP_KDM_ACTION_CATCHUNIT__HPP
#define EMF_CPP_KDM_ACTION_CATCHUNIT__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/ExceptionUnit.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


class CatchUnit :  public virtual ::kdm::action::ExceptionUnit
{
public:

	typedef CatchUnit_ptr ptr_type;
	
	CatchUnit();
	virtual ~CatchUnit();

	
	

	/*PROTECTED REGION ID(kdm::action::CatchUnit public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ActionPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::action::CatchUnit protected) START*/
	/*PROTECTED REGION END*/
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_CATCHUNIT__HPP
