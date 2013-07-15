
#ifndef EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALMODEL__HPP
#define EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALMODEL__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>


namespace kdm
{
namespace conceptual
{


// kdm::conceptual::ConceptualModel
class ConceptualModel :  public virtual ::kdm::kdm::KDMModel
{
public:

	typedef ConceptualModel_ptr ptr_type;

	ConceptualModel();
	virtual ~ConceptualModel();

	// Typedefs
	typedef ::e4c::impl::reference< ConceptualModel__conceptualElement_tag > _conceptualElement_t;

	
	// Members
	_conceptualElement_t conceptualElement;

};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALMODEL__HPP
