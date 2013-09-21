
#ifndef EMF_CPP_KDM_SOURCE_DIRECTORY__HPP
#define EMF_CPP_KDM_SOURCE_DIRECTORY__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/InventoryContainer.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace source
{


// kdm::source::Directory
class Directory :  public virtual ::kdm::source::InventoryContainer
{
public:

	typedef Directory_ptr ptr_type;
	
	Directory();
	virtual ~Directory();

	typedef ::kdm::core::String path_t;

	
	void setPath(path_t _path);
	path_t getPath() const;


	path_t m_path;

		
protected:

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_DIRECTORY__HPP
