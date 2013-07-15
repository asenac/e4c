
#ifndef EMF_CPP_KDM_SOURCE_IMAGE__HPP
#define EMF_CPP_KDM_SOURCE_IMAGE__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/InventoryItem.hpp>


namespace kdm
{
namespace source
{


// kdm::source::Image
class Image :  public virtual ::kdm::source::InventoryItem
{
public:

	typedef Image_ptr ptr_type;

	Image();
	virtual ~Image();

	// Typedefs
	
	
	// Members
	
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_IMAGE__HPP
