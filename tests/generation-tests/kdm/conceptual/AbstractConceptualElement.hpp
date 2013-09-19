
#ifndef EMF_CPP_KDM_CONCEPTUAL_ABSTRACTCONCEPTUALELEMENT__HPP
#define EMF_CPP_KDM_CONCEPTUAL_ABSTRACTCONCEPTUALELEMENT__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/core/KDMEntity.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace conceptual
{


// kdm::conceptual::AbstractConceptualElement
class AbstractConceptualElement :  public virtual ::kdm::core::KDMEntity
{
public:

	typedef AbstractConceptualElement_ptr ptr_type;
	
	virtual ~AbstractConceptualElement();

	typedef boost::ptr_set < kdm::source::SourceRef > source_t;
	typedef std::vector < kdm::core::KDMEntity_ptr > implementation_t;
	typedef boost::ptr_set < kdm::conceptual::AbstractConceptualRelationship > conceptualRelation_t;
	typedef boost::ptr_set < kdm::action::ActionElement > abstraction_t;

	
	// TODO
	// TODO
	// TODO
	// TODO

	
protected:
	AbstractConceptualElement();

	source_t m_source;
	implementation_t m_implementation;
	conceptualRelation_t m_conceptualRelation;
	abstraction_t m_abstraction;

};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_ABSTRACTCONCEPTUALELEMENT__HPP
