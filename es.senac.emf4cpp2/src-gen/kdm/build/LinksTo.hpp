
#ifndef EMF_CPP_KDM_BUILD_LINKSTO__HPP
#define EMF_CPP_KDM_BUILD_LINKSTO__HPP

#include <kdm/build/fwd.hpp>
#include <kdm/build/meta.hpp>
#include <kdm/build/AbstractBuildRelationship.hpp>


namespace kdm
{
namespace build
{


// kdm::build::LinksTo
class LinksTo :  public virtual ::kdm::build::AbstractBuildRelationship
{
public:

	typedef LinksTo_ptr ptr_type;

	LinksTo();
	virtual ~LinksTo();

	// Typedefs
	typedef ::e4c::impl::reference< LinksTo__to_tag > _to_t;
	typedef ::e4c::impl::reference< LinksTo__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // build
} // kdm


#endif // EMF_CPP_KDM_BUILD_LINKSTO__HPP
