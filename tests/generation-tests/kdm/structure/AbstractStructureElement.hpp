
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
	void addAggregated(kdm::core::AggregatedRelationship_ptr aggregated_);
	void addAllAggregated(const aggregated_t& aggregated_);
	implementation_t getImplementation() const;
	void addImplementation(kdm::core::KDMEntity_ptr implementation_);
	void addAllImplementation(const implementation_t& implementation_);
	structureElement_t getStructureElement() const;
	void addStructureElement(kdm::structure::AbstractStructureElement_ptr structureElement_);
	void addAllStructureElement(const structureElement_t& structureElement_);
	structureRelationship_t getStructureRelationship() const;
	void addStructureRelationship(kdm::structure::AbstractStructureRelationship_ptr structureRelationship_);
	void addAllStructureRelationship(const structureRelationship_t& structureRelationship_);
	

	/*PROTECTED REGION ID(kdm::structure::AbstractStructureElement public) START*/
	/*PROTECTED REGION END*/
		
protected:
	AbstractStructureElement();

	friend class StructurePackage;

	std::set < std::unique_ptr < kdm::core::AggregatedRelationship > > m_aggregated;
	std::set < kdm::core::KDMEntity_ptr > m_implementation;
	std::set < std::unique_ptr < kdm::structure::AbstractStructureElement > > m_structureElement;
	std::set < std::unique_ptr < kdm::structure::AbstractStructureRelationship > > m_structureRelationship;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::structure::AbstractStructureElement protected) START*/
	/*PROTECTED REGION END*/
};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_ABSTRACTSTRUCTUREELEMENT__HPP
