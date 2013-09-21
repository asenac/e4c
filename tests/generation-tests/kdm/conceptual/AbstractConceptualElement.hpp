
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

	typedef std::set < kdm::source::SourceRef_ptr > source_t;
	typedef std::set < kdm::core::KDMEntity_ptr > implementation_t;
	typedef std::set < kdm::conceptual::AbstractConceptualRelationship_ptr > conceptualRelation_t;
	typedef std::set < kdm::action::ActionElement_ptr > abstraction_t;

	
	source_t getSource() const;
	implementation_t getImplementation() const;
	conceptualRelation_t getConceptualRelation() const;
	abstraction_t getAbstraction() const;


	std::set < std::unique_ptr < kdm::source::SourceRef > > m_source;
	std::set < kdm::core::KDMEntity_ptr > m_implementation;
	std::set < std::unique_ptr < kdm::conceptual::AbstractConceptualRelationship > > m_conceptualRelation;
	std::set < std::unique_ptr < kdm::action::ActionElement > > m_abstraction;

		
protected:
	AbstractConceptualElement();

};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_ABSTRACTCONCEPTUALELEMENT__HPP
