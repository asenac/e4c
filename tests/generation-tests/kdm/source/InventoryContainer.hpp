
#ifndef EMF_CPP_KDM_SOURCE_INVENTORYCONTAINER__HPP
#define EMF_CPP_KDM_SOURCE_INVENTORYCONTAINER__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/AbstractInventoryElement.hpp>

#include <e4c/mapping.hpp>

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

	typedef boost::ptr_set < kdm::source::AbstractInventoryElement > inventoryElement_t;

	
	// TODO

	
protected:

	inventoryElement_t m_inventoryElement;

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_INVENTORYCONTAINER__HPP
