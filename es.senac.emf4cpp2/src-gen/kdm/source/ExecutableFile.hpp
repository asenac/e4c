
#ifndef EMF_CPP_KDM_SOURCE_EXECUTABLEFILE__HPP
#define EMF_CPP_KDM_SOURCE_EXECUTABLEFILE__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/InventoryItem.hpp>


namespace kdm
{
namespace source
{


// kdm::source::ExecutableFile
class ExecutableFile :  public virtual ::kdm::source::InventoryItem
{
public:

	typedef ExecutableFile_ptr ptr_type;

	ExecutableFile();
	virtual ~ExecutableFile();

	// Typedefs
	
	
	// Members
	
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_EXECUTABLEFILE__HPP
