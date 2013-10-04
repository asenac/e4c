
#ifndef EMF_CPP_KDM_STRUCTURE_STRUCTURERELATIONSHIP__HPP
#define EMF_CPP_KDM_STRUCTURE_STRUCTURERELATIONSHIP__HPP

#include <kdm/structure/fwd.hpp>
#include <kdm/structure/meta.hpp>
#include <kdm/structure/AbstractStructureRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace structure
{


class StructureRelationship :  public virtual ::kdm::structure::AbstractStructureRelationship
{
public:

	typedef StructureRelationship_ptr ptr_type;
	
	StructureRelationship();
	virtual ~StructureRelationship();

	typedef kdm::core::KDMEntity_ptr to_t;
	typedef kdm::structure::AbstractStructureElement_ptr from_t;
	
	to_t getTo() const;
	void setTo(to_t to_);
	from_t getFrom() const;
	void setFrom(from_t from_);
	

	/*PROTECTED REGION ID(kdm::structure::StructureRelationship public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class StructurePackage;

	kdm::core::KDMEntity_ptr m_to;
	kdm::structure::AbstractStructureElement_ptr m_from;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::structure::StructureRelationship protected) START*/
	/*PROTECTED REGION END*/
};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_STRUCTURERELATIONSHIP__HPP
