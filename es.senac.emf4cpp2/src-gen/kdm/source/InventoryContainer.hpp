
#ifndef EMF_CPP_KDM_SOURCE_INVENTORYCONTAINER__HPP
#define EMF_CPP_KDM_SOURCE_INVENTORYCONTAINER__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/AbstractInventoryElement.hpp>


namespace kdm
{
namespace source
{


// kdm::source::InventoryContainer
class InventoryContainer :  public virtual ::kdm::source::AbstractInventoryElement
{
public:

	typedef InventoryContainer_ptr ptr_type;

	InventoryContainer();
	virtual ~InventoryContainer();

	// Typedefs
	typedef ::e4c::impl::reference< InventoryContainer__inventoryElement_tag > _inventoryElement_t;

	
	// Members
	_inventoryElement_t inventoryElement;

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_INVENTORYCONTAINER__HPP
