
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

	typedef std::set < kdm::conceptual::AbstractConceptualElement_ptr > conceptualElement_t;

	
	conceptualElement_t getConceptualElement() const;


	std::set < std::unique_ptr < kdm::conceptual::AbstractConceptualElement > > m_conceptualElement;

		
protected:

};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALCONTAINER__HPP
