
#ifndef EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALROLE__HPP
#define EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALROLE__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/conceptual/AbstractConceptualElement.hpp>


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

	// Typedefs
	typedef ::e4c::impl::reference< ConceptualRole__conceptualElement_tag > _conceptualElement_t;

	
	// Members
	_conceptualElement_t conceptualElement;

};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALROLE__HPP
