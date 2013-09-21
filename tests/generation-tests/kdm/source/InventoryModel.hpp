
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

	typedef std::set < kdm::source::AbstractInventoryElement_ptr > inventoryElement_t;

	
	inventoryElement_t getInventoryElement() const;


	std::set < std::unique_ptr < kdm::source::AbstractInventoryElement > > m_inventoryElement;

		
protected:

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_INVENTORYMODEL__HPP
