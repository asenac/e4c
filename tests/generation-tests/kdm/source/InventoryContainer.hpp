
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


class InventoryContainer :  public virtual ::kdm::source::AbstractInventoryElement
{
public:

	typedef InventoryContainer_ptr ptr_type;
	
	InventoryContainer();
	virtual ~InventoryContainer();

	typedef std::set < kdm::source::AbstractInventoryElement_ptr > inventoryElement_t;
	
	inventoryElement_t getInventoryElement() const;
	void addInventoryElement(kdm::source::AbstractInventoryElement_ptr inventoryElement_);
	void addAllInventoryElement(const inventoryElement_t& inventoryElement_);
	

	/*PROTECTED REGION ID(kdm::source::InventoryContainer public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class SourcePackage;

	std::set < std::unique_ptr < kdm::source::AbstractInventoryElement > > m_inventoryElement;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::source::InventoryContainer protected) START*/
	/*PROTECTED REGION END*/
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_INVENTORYCONTAINER__HPP
