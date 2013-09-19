
#ifndef EMF_CPP_KDM_STRUCTURE_ABSTRACTSTRUCTUREELEMENT__HPP
#define EMF_CPP_KDM_STRUCTURE_ABSTRACTSTRUCTUREELEMENT__HPP

#include <kdm/structure/fwd.hpp>
#include <kdm/structure/meta.hpp>
#include <kdm/core/KDMEntity.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace structure
{


// kdm::structure::AbstractStructureElement
class AbstractStructureElement :  public virtual ::kdm::core::KDMEntity
{
public:

	typedef AbstractStructureElement_ptr ptr_type;
	
	virtual ~AbstractStructureElement();

	typedef boost::ptr_set < kdm::core::AggregatedRelationship > aggregated_t;
	typedef std::vector < kdm::core::KDMEntity_ptr > implementation_t;
	typedef boost::ptr_set < kdm::structure::AbstractStructureElement > structureElement_t;
	typedef boost::ptr_set < kdm::structure::AbstractStructureRelationship > structureRelationship_t;

	
	// TODO
	// TODO
	// TODO
	// TODO

	
protected:
	AbstractStructureElement();

	aggregated_t m_aggregated;
	implementation_t m_implementation;
	structureElement_t m_structureElement;
	structureRelationship_t m_structureRelationship;

};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_ABSTRACTSTRUCTUREELEMENT__HPP
