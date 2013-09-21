
#include "InventoryItem.hpp"

using namespace kdm::source;

InventoryItem::InventoryItem() : 
	m_version(),
    m_path()
{
}

InventoryItem::~InventoryItem()
{
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



