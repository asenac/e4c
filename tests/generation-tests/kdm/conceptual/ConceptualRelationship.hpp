
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

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::core::KDMEntity_ptr m_to;
	kdm::conceptual::AbstractConceptualElement_ptr m_from;

		
protected:

};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALRELATIONSHIP__HPP
