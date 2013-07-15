
#ifndef EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALELEMENT__HPP
#define EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALELEMENT__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/conceptual/AbstractConceptualElement.hpp>


namespace kdm
{
namespace conceptual
{


// kdm::conceptual::ConceptualElement
class ConceptualElement :  public virtual ::kdm::conceptual::AbstractConceptualElement
{
public:

	typedef ConceptualElement_ptr ptr_type;

	ConceptualElement();
	virtual ~ConceptualElement();

	// Typedefs
	
	
	// Members
	
};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALELEMENT__HPP
