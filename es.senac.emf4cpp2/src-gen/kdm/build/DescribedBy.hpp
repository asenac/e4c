
#ifndef EMF_CPP_KDM_BUILD_DESCRIBEDBY__HPP
#define EMF_CPP_KDM_BUILD_DESCRIBEDBY__HPP

#include <kdm/build/fwd.hpp>
#include <kdm/build/meta.hpp>
#include <kdm/build/AbstractBuildRelationship.hpp>


namespace kdm
{
namespace build
{


// kdm::build::DescribedBy
class DescribedBy :  public virtual ::kdm::build::AbstractBuildRelationship
{
public:

	typedef DescribedBy_ptr ptr_type;

	DescribedBy();
	virtual ~DescribedBy();

	// Typedefs
	typedef ::e4c::impl::reference< DescribedBy__to_tag > _to_t;
	typedef ::e4c::impl::reference< DescribedBy__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // build
} // kdm


#endif // EMF_CPP_KDM_BUILD_DESCRIBEDBY__HPP
