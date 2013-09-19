
#ifndef EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALRELATIONSHIP__HPP
#define EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALRELATIONSHIP__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/conceptual/AbstractConceptualRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace conceptual
{


// kdm::conceptual::ConceptualRelationship
class ConceptualRelationship :  public virtual ::kdm::conceptual::AbstractConceptualRelationship
{
public:

	typedef ConceptualRelationship_ptr ptr_type;
	
	ConceptualRelationship();
	virtual ~ConceptualRelationship();

	typedef kdm::core::KDMEntity_ptr to_t;
	typedef kdm::conceptual::AbstractConceptualElement_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALRELATIONSHIP__HPP
