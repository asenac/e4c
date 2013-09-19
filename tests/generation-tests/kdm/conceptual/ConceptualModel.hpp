
#ifndef EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALMODEL__HPP
#define EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALMODEL__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>

#include <e4c/mapping.hpp>

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

	typedef boost::ptr_set < kdm::conceptual::AbstractConceptualElement > conceptualElement_t;

	
	// TODO

	
protected:

	conceptualElement_t m_conceptualElement;

};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALMODEL__HPP
