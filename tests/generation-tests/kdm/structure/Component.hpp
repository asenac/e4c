
#ifndef EMF_CPP_KDM_STRUCTURE_COMPONENT__HPP
#define EMF_CPP_KDM_STRUCTURE_COMPONENT__HPP

#include <kdm/structure/fwd.hpp>
#include <kdm/structure/meta.hpp>
#include <kdm/structure/AbstractStructureElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace structure
{


class Component :  public virtual ::kdm::structure::AbstractStructureElement
{
public:

	typedef Component_ptr ptr_type;
	
	Component();
	virtual ~Component();

	
	

	/*PROTECTED REGION ID(kdm::structure::Component public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class StructurePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::structure::Component protected) START*/
	/*PROTECTED REGION END*/
};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_COMPONENT__HPP
