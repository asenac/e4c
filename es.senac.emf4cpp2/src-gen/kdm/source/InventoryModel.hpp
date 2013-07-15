
#ifndef EMF_CPP_KDM_SOURCE_INVENTORYMODEL__HPP
#define EMF_CPP_KDM_SOURCE_INVENTORYMODEL__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>


namespace kdm
{
namespace source
{


// kdm::source::InventoryModel
class InventoryModel :  public virtual ::kdm::kdm::KDMModel
{
public:

	typedef InventoryModel_ptr ptr_type;

	InventoryModel();
	virtual ~InventoryModel();

	// Typedefs
	typedef ::e4c::impl::reference< InventoryModel__inventoryElement_tag > _inventoryElement_t;

	
	// Members
	_inventoryElement_t inventoryElement;

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_INVENTORYMODEL__HPP
