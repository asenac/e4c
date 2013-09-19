
#ifndef EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALCONTAINER__HPP
#define EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALCONTAINER__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/conceptual/AbstractConceptualElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace conceptual
{


// kdm::conceptual::ConceptualContainer
class ConceptualContainer :  public virtual ::kdm::conceptual::AbstractConceptualElement
{
public:

	typedef ConceptualContainer_ptr ptr_type;
	
	ConceptualContainer();
	virtual ~ConceptualContainer();

	typedef boost::ptr_set < kdm::conceptual::AbstractConceptualElement > conceptualElement_t;

	
	// TODO

	
protected:

	conceptualElement_t m_conceptualElement;

};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALCONTAINER__HPP
