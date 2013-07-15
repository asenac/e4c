
#ifndef EMF_CPP_KDM_ACTION_EXCEPTIONFLOW__HPP
#define EMF_CPP_KDM_ACTION_EXCEPTIONFLOW__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace action
{


// kdm::action::ExceptionFlow
class ExceptionFlow :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ExceptionFlow_ptr ptr_type;

	ExceptionFlow();
	virtual ~ExceptionFlow();

	// Typedefs
	typedef ::e4c::impl::reference< ExceptionFlow__to_tag > _to_t;
	typedef ::e4c::impl::reference< ExceptionFlow__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_EXCEPTIONFLOW__HPP
