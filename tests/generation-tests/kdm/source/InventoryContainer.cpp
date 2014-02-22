
#include "InventoryContainer.hpp"
#include <kdm/source/SourcePackage.hpp>
#include <kdm/source/AbstractInventoryElement.hpp>

using namespace kdm::source;

/*PROTECTED REGION ID(kdm::source::InventoryContainer include) START*/
/*PROTECTED REGION END*/

InventoryContainer::InventoryContainer() :
    m_inventoryElement()
{
    /*PROTECTED REGION ID(InventoryContainer constructor) START*/
    /*PROTECTED REGION END*/
}

InventoryContainer::~InventoryContainer()
{
    /*PROTECTED REGION ID(InventoryContainer destructor) START*/
    /*PROTECTED REGION END*/
}

InventoryContainer::inventoryElement_t InventoryContainer::getInventoryElement() const
{
    return e4c::returned(m_inventoryElement);
}


void InventoryContainer::addInventoryElement(kdm::source::AbstractInventoryElement_ptr inventoryElement_)
{
    m_inventoryElement.insert(std::unique_ptr < kdm::source::AbstractInventoryElement >(inventoryElement_));
}

void InventoryContainer::addAllInventoryElement(const inventoryElement_t& inventoryElement_)
{
    for (auto i = inventoryElement_.begin(); i != inventoryElement_.end(); i++)
        addInventoryElement(*i);
}



/*PROTECTED REGION ID(kdm::source::InventoryContainer implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr InventoryContainer::eClassImpl() const
{
    return SourcePackage::_instance()->getInventoryContainer();
}

