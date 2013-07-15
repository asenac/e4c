
#ifndef EMF_CPP_KDM_BUILD_CONSUMES__HPP
#define EMF_CPP_KDM_BUILD_CONSUMES__HPP

#include <kdm/build/fwd.hpp>
#include <kdm/build/meta.hpp>
#include <kdm/build/AbstractBuildRelationship.hpp>


namespace kdm
{
namespace build
{


// kdm::build::Consumes
class Consumes :  public virtual ::kdm::build::AbstractBuildRelationship
{
public:

	typedef Consumes_ptr ptr_type;

	Consumes();
	virtual ~Consumes();

	// Typedefs
	typedef ::e4c::impl::reference< Consumes__to_tag > _to_t;
	typedef ::e4c::impl::reference< Consumes__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // build
} // kdm


#endif // EMF_CPP_KDM_BUILD_CONSUMES__HPP
