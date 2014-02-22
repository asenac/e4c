
#include "InventoryItem.hpp"
#include <kdm/source/SourcePackage.hpp>

using namespace kdm::source;

/*PROTECTED REGION ID(kdm::source::InventoryItem include) START*/
/*PROTECTED REGION END*/

InventoryItem::InventoryItem() :
    m_version(),
    m_path()
{
    /*PROTECTED REGION ID(InventoryItem constructor) START*/
    /*PROTECTED REGION END*/
}

InventoryItem::~InventoryItem()
{
    /*PROTECTED REGION ID(InventoryItem destructor) START*/
    /*PROTECTED REGION END*/
}

void InventoryItem::setVersion(version_t _version)
{
    m_version = _version;;
}

InventoryItem::version_t InventoryItem::getVersion() const
{
    return m_version;
}

void InventoryItem::setPath(path_t _path)
{
    m_path = _path;;
}

InventoryItem::path_t InventoryItem::getPath() const
{
    return m_path;
}



/*PROTECTED REGION ID(kdm::source::InventoryItem implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr InventoryItem::eClassImpl() const
{
    return SourcePackage::_instance()->getInventoryItem();
}

