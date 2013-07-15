
#ifndef EMF_CPP_KDM_CODE_VISIBLEIN__HPP
#define EMF_CPP_KDM_CODE_VISIBLEIN__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>


namespace kdm
{
namespace code
{


// kdm::code::VisibleIn
class VisibleIn :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef VisibleIn_ptr ptr_type;

	VisibleIn();
	virtual ~VisibleIn();

	// Typedefs
	typedef ::e4c::impl::reference< VisibleIn__to_tag > _to_t;
	typedef ::e4c::impl::reference< VisibleIn__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_VISIBLEIN__HPP
