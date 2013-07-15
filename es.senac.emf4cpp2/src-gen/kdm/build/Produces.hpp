
#ifndef EMF_CPP_KDM_BUILD_PRODUCES__HPP
#define EMF_CPP_KDM_BUILD_PRODUCES__HPP

#include <kdm/build/fwd.hpp>
#include <kdm/build/meta.hpp>
#include <kdm/build/AbstractBuildRelationship.hpp>


namespace kdm
{
namespace build
{


// kdm::build::Produces
class Produces :  public virtual ::kdm::build::AbstractBuildRelationship
{
public:

	typedef Produces_ptr ptr_type;

	Produces();
	virtual ~Produces();

	// Typedefs
	typedef ::e4c::impl::reference< Produces__to_tag > _to_t;
	typedef ::e4c::impl::reference< Produces__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // build
} // kdm


#endif // EMF_CPP_KDM_BUILD_PRODUCES__HPP
