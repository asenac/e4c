
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


// kdm::structure::StructureRelationship
class StructureRelationship :  public virtual ::kdm::structure::AbstractStructureRelationship
{
public:

	typedef StructureRelationship_ptr ptr_type;
	
	StructureRelationship();
	virtual ~StructureRelationship();

	typedef kdm::core::KDMEntity_ptr to_t;
	typedef kdm::structure::AbstractStructureElement_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::core::KDMEntity_ptr m_to;
	kdm::structure::AbstractStructureElement_ptr m_from;

		
protected:

};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_STRUCTURERELATIONSHIP__HPP
