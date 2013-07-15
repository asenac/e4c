
#ifndef EMF_CPP_KDM_ACTION_COMPLIESTO__HPP
#define EMF_CPP_KDM_ACTION_COMPLIESTO__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace action
{


// kdm::action::CompliesTo
class CompliesTo :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef CompliesTo_ptr ptr_type;

	CompliesTo();
	virtual ~CompliesTo();

	// Typedefs
	typedef ::e4c::impl::reference< CompliesTo__to_tag > _to_t;
	typedef ::e4c::impl::reference< CompliesTo__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_COMPLIESTO__HPP
