
#ifndef EMF_CPP_KDM_ACTION_CONTROLFLOW__HPP
#define EMF_CPP_KDM_ACTION_CONTROLFLOW__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace action
{


// kdm::action::ControlFlow
class ControlFlow :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ControlFlow_ptr ptr_type;

	ControlFlow();
	virtual ~ControlFlow();

	// Typedefs
	typedef ::e4c::impl::reference< ControlFlow__to_tag > _to_t;
	typedef ::e4c::impl::reference< ControlFlow__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_CONTROLFLOW__HPP
