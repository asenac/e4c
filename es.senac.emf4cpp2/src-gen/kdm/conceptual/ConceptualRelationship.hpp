
#ifndef EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALRELATIONSHIP__HPP
#define EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALRELATIONSHIP__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/conceptual/AbstractConceptualRelationship.hpp>


namespace kdm
{
namespace conceptual
{


// kdm::conceptual::ConceptualRelationship
class ConceptualRelationship :  public virtual ::kdm::conceptual::AbstractConceptualRelationship
{
public:

	typedef ConceptualRelationship_ptr ptr_type;

	ConceptualRelationship();
	virtual ~ConceptualRelationship();

	// Typedefs
	typedef ::e4c::impl::reference< ConceptualRelationship__to_tag > _to_t;
	typedef ::e4c::impl::reference< ConceptualRelationship__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALRELATIONSHIP__HPP
