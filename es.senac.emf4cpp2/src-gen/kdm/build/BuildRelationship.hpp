
#ifndef EMF_CPP_KDM_BUILD_BUILDRELATIONSHIP__HPP
#define EMF_CPP_KDM_BUILD_BUILDRELATIONSHIP__HPP

#include <kdm/build/fwd.hpp>
#include <kdm/build/meta.hpp>
#include <kdm/build/AbstractBuildRelationship.hpp>


namespace kdm
{
namespace build
{


// kdm::build::BuildRelationship
class BuildRelationship :  public virtual ::kdm::build::AbstractBuildRelationship
{
public:

	typedef BuildRelationship_ptr ptr_type;

	BuildRelationship();
	virtual ~BuildRelationship();

	// Typedefs
	typedef ::e4c::impl::reference< BuildRelationship__to_tag > _to_t;
	typedef ::e4c::impl::reference< BuildRelationship__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // build
} // kdm


#endif // EMF_CPP_KDM_BUILD_BUILDRELATIONSHIP__HPP
