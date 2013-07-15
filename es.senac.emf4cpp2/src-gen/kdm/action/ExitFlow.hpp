
#ifndef EMF_CPP_KDM_ACTION_EXITFLOW__HPP
#define EMF_CPP_KDM_ACTION_EXITFLOW__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace action
{


// kdm::action::ExitFlow
class ExitFlow :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ExitFlow_ptr ptr_type;

	ExitFlow();
	virtual ~ExitFlow();

	// Typedefs
	typedef ::e4c::impl::reference< ExitFlow__to_tag > _to_t;
	typedef ::e4c::impl::reference< ExitFlow__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_EXITFLOW__HPP
