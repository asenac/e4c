
#ifndef EMF_CPP_KDM_SOURCE_RESOURCEDESCRIPTION__HPP
#define EMF_CPP_KDM_SOURCE_RESOURCEDESCRIPTION__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/InventoryItem.hpp>


namespace kdm
{
namespace source
{


// kdm::source::ResourceDescription
class ResourceDescription :  public virtual ::kdm::source::InventoryItem
{
public:

	typedef ResourceDescription_ptr ptr_type;

	ResourceDescription();
	virtual ~ResourceDescription();

	// Typedefs
	
	
	// Members
	
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_RESOURCEDESCRIPTION__HPP
