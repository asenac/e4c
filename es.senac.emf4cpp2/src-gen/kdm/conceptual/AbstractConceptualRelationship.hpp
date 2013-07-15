
#ifndef EMF_CPP_KDM_CONCEPTUAL_ABSTRACTCONCEPTUALRELATIONSHIP__HPP
#define EMF_CPP_KDM_CONCEPTUAL_ABSTRACTCONCEPTUALRELATIONSHIP__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/core/KDMRelationship.hpp>


namespace kdm
{
namespace conceptual
{


// kdm::conceptual::AbstractConceptualRelationship
class AbstractConceptualRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

	typedef AbstractConceptualRelationship_ptr ptr_type;

	AbstractConceptualRelationship();
	virtual ~AbstractConceptualRelationship();

	// Typedefs
	
	
	// Members
	
};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_ABSTRACTCONCEPTUALRELATIONSHIP__HPP
