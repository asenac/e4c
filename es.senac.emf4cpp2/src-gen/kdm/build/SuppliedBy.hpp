
#ifndef EMF_CPP_KDM_BUILD_SUPPLIEDBY__HPP
#define EMF_CPP_KDM_BUILD_SUPPLIEDBY__HPP

#include <kdm/build/fwd.hpp>
#include <kdm/build/meta.hpp>
#include <kdm/build/AbstractBuildRelationship.hpp>


namespace kdm
{
namespace build
{


// kdm::build::SuppliedBy
class SuppliedBy :  public virtual ::kdm::build::AbstractBuildRelationship
{
public:

	typedef SuppliedBy_ptr ptr_type;

	SuppliedBy();
	virtual ~SuppliedBy();

	// Typedefs
	typedef ::e4c::impl::reference< SuppliedBy__to_tag > _to_t;
	typedef ::e4c::impl::reference< SuppliedBy__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // build
} // kdm


#endif // EMF_CPP_KDM_BUILD_SUPPLIEDBY__HPP
