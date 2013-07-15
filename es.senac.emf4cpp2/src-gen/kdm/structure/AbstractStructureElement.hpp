
#ifndef EMF_CPP_KDM_STRUCTURE_ABSTRACTSTRUCTUREELEMENT__HPP
#define EMF_CPP_KDM_STRUCTURE_ABSTRACTSTRUCTUREELEMENT__HPP

#include <kdm/structure/fwd.hpp>
#include <kdm/structure/meta.hpp>
#include <kdm/core/KDMEntity.hpp>


namespace kdm
{
namespace structure
{


// kdm::structure::AbstractStructureElement
class AbstractStructureElement :  public virtual ::kdm::core::KDMEntity
{
public:

	typedef AbstractStructureElement_ptr ptr_type;

	AbstractStructureElement();
	virtual ~AbstractStructureElement();

	// Typedefs
	typedef ::e4c::impl::reference< AbstractStructureElement__aggregated_tag > _aggregated_t;
	typedef ::e4c::impl::reference< AbstractStructureElement__implementation_tag > _implementation_t;
	typedef ::e4c::impl::reference< AbstractStructureElement__structureElement_tag > _structureElement_t;
	typedef ::e4c::impl::reference< AbstractStructureElement__structureRelationship_tag > _structureRelationship_t;

	
	// Members
	_aggregated_t aggregated;
	_implementation_t implementation;
	_structureElement_t structureElement;
	_structureRelationship_t structureRelationship;

};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_ABSTRACTSTRUCTUREELEMENT__HPP
