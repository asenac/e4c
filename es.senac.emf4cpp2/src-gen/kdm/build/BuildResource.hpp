
#ifndef EMF_CPP_KDM_BUILD_BUILDRESOURCE__HPP
#define EMF_CPP_KDM_BUILD_BUILDRESOURCE__HPP

#include <kdm/build/fwd.hpp>
#include <kdm/build/meta.hpp>
#include <kdm/build/AbstractBuildElement.hpp>


namespace kdm
{
namespace build
{


// kdm::build::BuildResource
class BuildResource :  public virtual ::kdm::build::AbstractBuildElement
{
public:

	typedef BuildResource_ptr ptr_type;

	BuildResource();
	virtual ~BuildResource();

	// Typedefs
	typedef ::e4c::impl::reference< BuildResource__implementation_tag > _implementation_t;
	typedef ::e4c::impl::reference< BuildResource__groupedBuild_tag > _groupedBuild_t;
	typedef ::e4c::impl::reference< BuildResource__buildElement_tag > _buildElement_t;

	
	// Members
	_implementation_t implementation;
	_groupedBuild_t groupedBuild;
	_buildElement_t buildElement;

};

} // build
} // kdm


#endif // EMF_CPP_KDM_BUILD_BUILDRESOURCE__HPP
