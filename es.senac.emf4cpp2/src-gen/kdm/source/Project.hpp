
#ifndef EMF_CPP_KDM_SOURCE_PROJECT__HPP
#define EMF_CPP_KDM_SOURCE_PROJECT__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/InventoryContainer.hpp>


namespace kdm
{
namespace source
{


// kdm::source::Project
class Project :  public virtual ::kdm::source::InventoryContainer
{
public:

	typedef Project_ptr ptr_type;

	Project();
	virtual ~Project();

	// Typedefs
	
	
	// Members
	
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_PROJECT__HPP
