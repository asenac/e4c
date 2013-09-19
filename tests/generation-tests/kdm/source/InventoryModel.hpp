
#ifndef EMF_CPP_KDM_SOURCE_INVENTORYMODEL__HPP
#define EMF_CPP_KDM_SOURCE_INVENTORYMODEL__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>

#include <e4c/mapping.hpp>

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

	typedef boost::ptr_set < kdm::source::AbstractInventoryElement > inventoryElement_t;

	
	// TODO

	
protected:

	inventoryElement_t m_inventoryElement;

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_INVENTORYMODEL__HPP
