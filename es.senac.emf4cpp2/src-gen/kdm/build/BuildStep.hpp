
#ifndef EMF_CPP_KDM_BUILD_BUILDSTEP__HPP
#define EMF_CPP_KDM_BUILD_BUILDSTEP__HPP

#include <kdm/build/fwd.hpp>
#include <kdm/build/meta.hpp>
#include <kdm/build/BuildResource.hpp>


namespace kdm
{
namespace build
{


// kdm::build::BuildStep
class BuildStep :  public virtual ::kdm::build::BuildResource
{
public:

	typedef BuildStep_ptr ptr_type;

	BuildStep();
	virtual ~BuildStep();

	// Typedefs
	
	
	// Members
	
};

} // build
} // kdm


#endif // EMF_CPP_KDM_BUILD_BUILDSTEP__HPP
