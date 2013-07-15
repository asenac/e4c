
#ifndef EMF_CPP_KDM_SOURCE_INVENTORYITEM__HPP
#define EMF_CPP_KDM_SOURCE_INVENTORYITEM__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/AbstractInventoryElement.hpp>


namespace kdm
{
namespace source
{


// kdm::source::InventoryItem
class InventoryItem :  public virtual ::kdm::source::AbstractInventoryElement
{
public:

	typedef InventoryItem_ptr ptr_type;

	InventoryItem();
	virtual ~InventoryItem();

	// Typedefs
	typedef ::e4c::impl::attribute< InventoryItem__version_tag > _version_t;
	typedef ::e4c::impl::attribute< InventoryItem__path_tag > _path_t;

	
	// Members
	_version_t version;
	_path_t path;

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_INVENTORYITEM__HPP
