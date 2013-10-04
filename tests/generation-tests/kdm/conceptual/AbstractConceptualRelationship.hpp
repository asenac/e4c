
#ifndef EMF_CPP_KDM_CONCEPTUAL_ABSTRACTCONCEPTUALRELATIONSHIP__HPP
#define EMF_CPP_KDM_CONCEPTUAL_ABSTRACTCONCEPTUALRELATIONSHIP__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/core/KDMRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace conceptual
{


class AbstractConceptualRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

	typedef AbstractConceptualRelationship_ptr ptr_type;
	
	virtual ~AbstractConceptualRelationship();

	
	

	/*PROTECTED REGION ID(kdm::conceptual::AbstractConceptualRelationship public) START*/
	/*PROTECTED REGION END*/
		
protected:
	AbstractConceptualRelationship();

	friend class ConceptualPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::conceptual::AbstractConceptualRelationship protected) START*/
	/*PROTECTED REGION END*/
};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_ABSTRACTCONCEPTUALRELATIONSHIP__HPP
