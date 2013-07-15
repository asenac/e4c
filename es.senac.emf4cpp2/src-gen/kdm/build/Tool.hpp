
#ifndef EMF_CPP_KDM_BUILD_TOOL__HPP
#define EMF_CPP_KDM_BUILD_TOOL__HPP

#include <kdm/build/fwd.hpp>
#include <kdm/build/meta.hpp>
#include <kdm/build/AbstractBuildElement.hpp>


namespace kdm
{
namespace build
{


// kdm::build::Tool
class Tool :  public virtual ::kdm::build::AbstractBuildElement
{
public:

	typedef Tool_ptr ptr_type;

	Tool();
	virtual ~Tool();

	// Typedefs
	
	
	// Members
	
};

} // build
} // kdm


#endif // EMF_CPP_KDM_BUILD_TOOL__HPP
