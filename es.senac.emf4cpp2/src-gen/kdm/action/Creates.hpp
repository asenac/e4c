
#ifndef EMF_CPP_KDM_ACTION_CREATES__HPP
#define EMF_CPP_KDM_ACTION_CREATES__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace action
{


// kdm::action::Creates
class Creates :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef Creates_ptr ptr_type;

	Creates();
	virtual ~Creates();

	// Typedefs
	typedef ::e4c::impl::reference< Creates__to_tag > _to_t;
	typedef ::e4c::impl::reference< Creates__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_CREATES__HPP
