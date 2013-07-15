
#ifndef EMF_CPP_KDM_SOURCE_DIRECTORY__HPP
#define EMF_CPP_KDM_SOURCE_DIRECTORY__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/InventoryContainer.hpp>


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

	// Typedefs
	typedef ::e4c::impl::attribute< Directory__path_tag > _path_t;

	
	// Members
	_path_t path;

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_DIRECTORY__HPP
