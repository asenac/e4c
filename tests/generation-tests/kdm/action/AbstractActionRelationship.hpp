
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


class AbstractActionRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

	typedef AbstractActionRelationship_ptr ptr_type;
	
	virtual ~AbstractActionRelationship();

	
	

	/*PROTECTED REGION ID(kdm::action::AbstractActionRelationship public) START*/
	/*PROTECTED REGION END*/
		
protected:
	AbstractActionRelationship();

	friend class ActionPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::action::AbstractActionRelationship protected) START*/
	/*PROTECTED REGION END*/
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_ABSTRACTACTIONRELATIONSHIP__HPP
