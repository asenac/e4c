
#ifndef EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALFLOW__HPP
#define EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALFLOW__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/conceptual/AbstractConceptualRelationship.hpp>


namespace kdm
{
namespace conceptual
{


// kdm::conceptual::ConceptualFlow
class ConceptualFlow :  public virtual ::kdm::conceptual::AbstractConceptualRelationship
{
public:

	typedef ConceptualFlow_ptr ptr_type;

	ConceptualFlow();
	virtual ~ConceptualFlow();

	// Typedefs
	typedef ::e4c::impl::reference< ConceptualFlow__to_tag > _to_t;
	typedef ::e4c::impl::reference< ConceptualFlow__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALFLOW__HPP
