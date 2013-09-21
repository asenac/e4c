
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

	typedef std::set < kdm::conceptual::AbstractConceptualElement_ptr > conceptualElement_t;

	
	conceptualElement_t getConceptualElement() const;


	std::set < std::unique_ptr < kdm::conceptual::AbstractConceptualElement > > m_conceptualElement;

		
protected:

};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALMODEL__HPP
