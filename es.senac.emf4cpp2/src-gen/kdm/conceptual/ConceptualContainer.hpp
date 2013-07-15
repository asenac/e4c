
#ifndef EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALCONTAINER__HPP
#define EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALCONTAINER__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/conceptual/AbstractConceptualElement.hpp>


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

	// Typedefs
	typedef ::e4c::impl::reference< ConceptualContainer__conceptualElement_tag > _conceptualElement_t;

	
	// Members
	_conceptualElement_t conceptualElement;

};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALCONTAINER__HPP
