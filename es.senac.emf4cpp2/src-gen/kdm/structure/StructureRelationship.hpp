
#ifndef EMF_CPP_KDM_STRUCTURE_STRUCTURERELATIONSHIP__HPP
#define EMF_CPP_KDM_STRUCTURE_STRUCTURERELATIONSHIP__HPP

#include <kdm/structure/fwd.hpp>
#include <kdm/structure/meta.hpp>
#include <kdm/structure/AbstractStructureRelationship.hpp>


namespace kdm
{
namespace structure
{


// kdm::structure::StructureRelationship
class StructureRelationship :  public virtual ::kdm::structure::AbstractStructureRelationship
{
public:

	typedef StructureRelationship_ptr ptr_type;

	StructureRelationship();
	virtual ~StructureRelationship();

	// Typedefs
	typedef ::e4c::impl::reference< StructureRelationship__to_tag > _to_t;
	typedef ::e4c::impl::reference< StructureRelationship__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_STRUCTURERELATIONSHIP__HPP
