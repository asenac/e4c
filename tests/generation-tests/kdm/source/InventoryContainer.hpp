
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

	typedef std::set < kdm::source::AbstractInventoryElement_ptr > inventoryElement_t;

	
	inventoryElement_t getInventoryElement() const;


	std::set < std::unique_ptr < kdm::source::AbstractInventoryElement > > m_inventoryElement;

		
protected:

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_INVENTORYCONTAINER__HPP
