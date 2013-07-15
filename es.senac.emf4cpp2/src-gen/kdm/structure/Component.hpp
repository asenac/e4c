
#ifndef EMF_CPP_KDM_STRUCTURE_COMPONENT__HPP
#define EMF_CPP_KDM_STRUCTURE_COMPONENT__HPP

#include <kdm/structure/fwd.hpp>
#include <kdm/structure/meta.hpp>
#include <kdm/structure/AbstractStructureElement.hpp>


namespace kdm
{
namespace structure
{


// kdm::structure::Component
class Component :  public virtual ::kdm::structure::AbstractStructureElement
{
public:

	typedef Component_ptr ptr_type;

	Component();
	virtual ~Component();

	// Typedefs
	
	
	// Members
	
};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_COMPONENT__HPP
