
#ifndef EMF_CPP_KDM_CONCEPTUAL_BEHAVIORUNIT__HPP
#define EMF_CPP_KDM_CONCEPTUAL_BEHAVIORUNIT__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/conceptual/ConceptualContainer.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace conceptual
{


class BehaviorUnit :  public virtual ::kdm::conceptual::ConceptualContainer
{
public:

	typedef BehaviorUnit_ptr ptr_type;
	
	BehaviorUnit();
	virtual ~BehaviorUnit();

	
	

	/*PROTECTED REGION ID(kdm::conceptual::BehaviorUnit public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ConceptualPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::conceptual::BehaviorUnit protected) START*/
	/*PROTECTED REGION END*/
};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_BEHAVIORUNIT__HPP
