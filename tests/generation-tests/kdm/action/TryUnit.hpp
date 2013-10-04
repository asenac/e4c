
#ifndef EMF_CPP_KDM_ACTION_TRYUNIT__HPP
#define EMF_CPP_KDM_ACTION_TRYUNIT__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/ExceptionUnit.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


class TryUnit :  public virtual ::kdm::action::ExceptionUnit
{
public:

	typedef TryUnit_ptr ptr_type;
	
	TryUnit();
	virtual ~TryUnit();

	
	

	/*PROTECTED REGION ID(kdm::action::TryUnit public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ActionPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::action::TryUnit protected) START*/
	/*PROTECTED REGION END*/
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_TRYUNIT__HPP
