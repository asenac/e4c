
#ifndef EMF_CPP_KDM_ACTION_USESTYPE__HPP
#define EMF_CPP_KDM_ACTION_USESTYPE__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace action
{


// kdm::action::UsesType
class UsesType :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef UsesType_ptr ptr_type;

	UsesType();
	virtual ~UsesType();

	// Typedefs
	typedef ::e4c::impl::reference< UsesType__to_tag > _to_t;
	typedef ::e4c::impl::reference< UsesType__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_USESTYPE__HPP
