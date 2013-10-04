
#ifndef EMF_CPP_KDM_STRUCTURE_ABSTRACTSTRUCTURERELATIONSHIP__HPP
#define EMF_CPP_KDM_STRUCTURE_ABSTRACTSTRUCTURERELATIONSHIP__HPP

#include <kdm/structure/fwd.hpp>
#include <kdm/structure/meta.hpp>
#include <kdm/core/KDMRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace structure
{


class AbstractStructureRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

	typedef AbstractStructureRelationship_ptr ptr_type;
	
	virtual ~AbstractStructureRelationship();

	
	

	/*PROTECTED REGION ID(kdm::structure::AbstractStructureRelationship public) START*/
	/*PROTECTED REGION END*/
		
protected:
	AbstractStructureRelationship();

	friend class StructurePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::structure::AbstractStructureRelationship protected) START*/
	/*PROTECTED REGION END*/
};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_ABSTRACTSTRUCTURERELATIONSHIP__HPP
