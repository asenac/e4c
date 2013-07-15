
#ifndef EMF_CPP_KDM_ACTION_ADDRESSES__HPP
#define EMF_CPP_KDM_ACTION_ADDRESSES__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace action
{


// kdm::action::Addresses
class Addresses :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef Addresses_ptr ptr_type;

	Addresses();
	virtual ~Addresses();

	// Typedefs
	typedef ::e4c::impl::reference< Addresses__to_tag > _to_t;
	typedef ::e4c::impl::reference< Addresses__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_ADDRESSES__HPP
