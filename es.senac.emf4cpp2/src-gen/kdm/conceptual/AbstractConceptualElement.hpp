
#ifndef EMF_CPP_KDM_CONCEPTUAL_ABSTRACTCONCEPTUALELEMENT__HPP
#define EMF_CPP_KDM_CONCEPTUAL_ABSTRACTCONCEPTUALELEMENT__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/core/KDMEntity.hpp>


namespace kdm
{
namespace conceptual
{


// kdm::conceptual::AbstractConceptualElement
class AbstractConceptualElement :  public virtual ::kdm::core::KDMEntity
{
public:

	typedef AbstractConceptualElement_ptr ptr_type;

	AbstractConceptualElement();
	virtual ~AbstractConceptualElement();

	// Typedefs
	typedef ::e4c::impl::reference< AbstractConceptualElement__source_tag > _source_t;
	typedef ::e4c::impl::reference< AbstractConceptualElement__implementation_tag > _implementation_t;
	typedef ::e4c::impl::reference< AbstractConceptualElement__conceptualRelation_tag > _conceptualRelation_t;
	typedef ::e4c::impl::reference< AbstractConceptualElement__abstraction_tag > _abstraction_t;

	
	// Members
	_source_t source;
	_implementation_t implementation;
	_conceptualRelation_t conceptualRelation;
	_abstraction_t abstraction;

};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_ABSTRACTCONCEPTUALELEMENT__HPP
