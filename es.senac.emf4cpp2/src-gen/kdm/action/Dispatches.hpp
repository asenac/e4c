
#ifndef EMF_CPP_KDM_ACTION_DISPATCHES__HPP
#define EMF_CPP_KDM_ACTION_DISPATCHES__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace action
{


// kdm::action::Dispatches
class Dispatches :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef Dispatches_ptr ptr_type;

	Dispatches();
	virtual ~Dispatches();

	// Typedefs
	typedef ::e4c::impl::reference< Dispatches__to_tag > _to_t;
	typedef ::e4c::impl::reference< Dispatches__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_DISPATCHES__HPP
