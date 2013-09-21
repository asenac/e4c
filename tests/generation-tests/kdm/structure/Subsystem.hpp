
#ifndef EMF_CPP_KDM_STRUCTURE_SUBSYSTEM__HPP
#define EMF_CPP_KDM_STRUCTURE_SUBSYSTEM__HPP

#include <kdm/structure/fwd.hpp>
#include <kdm/structure/meta.hpp>
#include <kdm/structure/AbstractStructureElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace structure
{


// kdm::structure::Subsystem
class Subsystem :  public virtual ::kdm::structure::AbstractStructureElement
{
public:

	typedef Subsystem_ptr ptr_type;
	
	Subsystem();
	virtual ~Subsystem();

	
	
	

	
		
protected:

};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_SUBSYSTEM__HPP
