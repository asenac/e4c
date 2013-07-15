
#ifndef EMF_CPP_KDM_BUILD_SUPPORTEDBY__HPP
#define EMF_CPP_KDM_BUILD_SUPPORTEDBY__HPP

#include <kdm/build/fwd.hpp>
#include <kdm/build/meta.hpp>
#include <kdm/build/AbstractBuildRelationship.hpp>


namespace kdm
{
namespace build
{


// kdm::build::SupportedBy
class SupportedBy :  public virtual ::kdm::build::AbstractBuildRelationship
{
public:

	typedef SupportedBy_ptr ptr_type;

	SupportedBy();
	virtual ~SupportedBy();

	// Typedefs
	typedef ::e4c::impl::reference< SupportedBy__to_tag > _to_t;
	typedef ::e4c::impl::reference< SupportedBy__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // build
} // kdm


#endif // EMF_CPP_KDM_BUILD_SUPPORTEDBY__HPP
