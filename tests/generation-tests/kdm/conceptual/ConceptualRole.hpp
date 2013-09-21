
#ifndef EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALROLE__HPP
#define EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALROLE__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/conceptual/AbstractConceptualElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace conceptual
{


// kdm::conceptual::ConceptualRole
class ConceptualRole :  public virtual ::kdm::conceptual::AbstractConceptualElement
{
public:

	typedef ConceptualRole_ptr ptr_type;
	
	ConceptualRole();
	virtual ~ConceptualRole();

	typedef kdm::conceptual::AbstractConceptualElement_ptr conceptualElement_t;

	
	conceptualElement_t getConceptualElement() const;


	kdm::conceptual::AbstractConceptualElement_ptr m_conceptualElement;

		
protected:

};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALROLE__HPP
