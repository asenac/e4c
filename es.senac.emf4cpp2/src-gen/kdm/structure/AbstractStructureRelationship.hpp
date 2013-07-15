
#ifndef EMF_CPP_KDM_STRUCTURE_ABSTRACTSTRUCTURERELATIONSHIP__HPP
#define EMF_CPP_KDM_STRUCTURE_ABSTRACTSTRUCTURERELATIONSHIP__HPP

#include <kdm/structure/fwd.hpp>
#include <kdm/structure/meta.hpp>
#include <kdm/core/KDMRelationship.hpp>


namespace kdm
{
namespace structure
{


// kdm::structure::AbstractStructureRelationship
class AbstractStructureRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

	typedef AbstractStructureRelationship_ptr ptr_type;

	AbstractStructureRelationship();
	virtual ~AbstractStructureRelationship();

	// Typedefs
	
	
	// Members
	
};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_ABSTRACTSTRUCTURERELATIONSHIP__HPP
