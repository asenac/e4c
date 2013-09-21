
#ifndef EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALFLOW__HPP
#define EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALFLOW__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/conceptual/AbstractConceptualRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace conceptual
{


// kdm::conceptual::ConceptualFlow
class ConceptualFlow :  public virtual ::kdm::conceptual::AbstractConceptualRelationship
{
public:

	typedef ConceptualFlow_ptr ptr_type;
	
	ConceptualFlow();
	virtual ~ConceptualFlow();

	typedef kdm::conceptual::ConceptualContainer_ptr to_t;
	typedef kdm::conceptual::ConceptualContainer_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::conceptual::ConceptualContainer_ptr m_to;
	kdm::conceptual::ConceptualContainer_ptr m_from;

		
protected:

};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALFLOW__HPP