
#ifndef EMF_CPP_KDM_SOURCE_INVENTORYITEM__HPP
#define EMF_CPP_KDM_SOURCE_INVENTORYITEM__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/AbstractInventoryElement.hpp>

#include <e4c/mapping.hpp>

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

	typedef int version_t;
	typedef int path_t;

	
	void setVersion(version_t _version);
	version_t getVersion() const;
	void setPath(path_t _path);
	path_t getPath() const;

	
protected:

	version_t m_version;
	path_t m_path;

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_INVENTORYITEM__HPP
