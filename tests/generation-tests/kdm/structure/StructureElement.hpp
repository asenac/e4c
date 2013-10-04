
#ifndef EMF_CPP_KDM_STRUCTURE_STRUCTUREELEMENT__HPP
#define EMF_CPP_KDM_STRUCTURE_STRUCTUREELEMENT__HPP

#include <kdm/structure/fwd.hpp>
#include <kdm/structure/meta.hpp>
#include <kdm/structure/AbstractStructureElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace structure
{


class StructureElement :  public virtual ::kdm::structure::AbstractStructureElement
{
public:

	typedef StructureElement_ptr ptr_type;
	
	StructureElement();
	virtual ~StructureElement();

	
	

	/*PROTECTED REGION ID(kdm::structure::StructureElement public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class StructurePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::structure::StructureElement protected) START*/
	/*PROTECTED REGION END*/
};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_STRUCTUREELEMENT__HPP
