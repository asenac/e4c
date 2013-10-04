
#ifndef EMF_CPP_KDM_STRUCTURE_ARCHITECTUREVIEW__HPP
#define EMF_CPP_KDM_STRUCTURE_ARCHITECTUREVIEW__HPP

#include <kdm/structure/fwd.hpp>
#include <kdm/structure/meta.hpp>
#include <kdm/structure/AbstractStructureElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace structure
{


class ArchitectureView :  public virtual ::kdm::structure::AbstractStructureElement
{
public:

	typedef ArchitectureView_ptr ptr_type;
	
	ArchitectureView();
	virtual ~ArchitectureView();

	
	

	/*PROTECTED REGION ID(kdm::structure::ArchitectureView public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class StructurePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::structure::ArchitectureView protected) START*/
	/*PROTECTED REGION END*/
};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_ARCHITECTUREVIEW__HPP
