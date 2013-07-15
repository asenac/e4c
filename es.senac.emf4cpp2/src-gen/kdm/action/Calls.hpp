
#ifndef EMF_CPP_KDM_ACTION_CALLS__HPP
#define EMF_CPP_KDM_ACTION_CALLS__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace action
{


// kdm::action::Calls
class Calls :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef Calls_ptr ptr_type;

	Calls();
	virtual ~Calls();

	// Typedefs
	typedef ::e4c::impl::reference< Calls__to_tag > _to_t;
	typedef ::e4c::impl::reference< Calls__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_CALLS__HPP
