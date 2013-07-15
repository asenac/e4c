
#ifndef EMF_CPP_KDM_BUILD_BUILDELEMENT__HPP
#define EMF_CPP_KDM_BUILD_BUILDELEMENT__HPP

#include <kdm/build/fwd.hpp>
#include <kdm/build/meta.hpp>
#include <kdm/build/AbstractBuildElement.hpp>


namespace kdm
{
namespace build
{


// kdm::build::BuildElement
class BuildElement :  public virtual ::kdm::build::AbstractBuildElement
{
public:

	typedef BuildElement_ptr ptr_type;

	BuildElement();
	virtual ~BuildElement();

	// Typedefs
	
	
	// Members
	
};

} // build
} // kdm


#endif // EMF_CPP_KDM_BUILD_BUILDELEMENT__HPP
