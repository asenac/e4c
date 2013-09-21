
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

	typedef std::set < kdm::core::AggregatedRelationship_ptr > aggregated_t;
	typedef std::set < kdm::core::KDMEntity_ptr > implementation_t;
	typedef std::set < kdm::structure::AbstractStructureElement_ptr > structureElement_t;
	typedef std::set < kdm::structure::AbstractStructureRelationship_ptr > structureRelationship_t;

	
	aggregated_t getAggregated() const;
	implementation_t getImplementation() const;
	structureElement_t getStructureElement() const;
	structureRelationship_t getStructureRelationship() const;


	std::set < std::unique_ptr < kdm::core::AggregatedRelationship > > m_aggregated;
	std::set < kdm::core::KDMEntity_ptr > m_implementation;
	std::set < std::unique_ptr < kdm::structure::AbstractStructureElement > > m_structureElement;
	std::set < std::unique_ptr < kdm::structure::AbstractStructureRelationship > > m_structureRelationship;

		
protected:
	AbstractStructureElement();

};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_ABSTRACTSTRUCTUREELEMENT__HPP
