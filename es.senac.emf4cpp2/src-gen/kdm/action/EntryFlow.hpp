
#ifndef EMF_CPP_KDM_ACTION_ENTRYFLOW__HPP
#define EMF_CPP_KDM_ACTION_ENTRYFLOW__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace action
{


// kdm::action::EntryFlow
class EntryFlow :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef EntryFlow_ptr ptr_type;

	EntryFlow();
	virtual ~EntryFlow();

	// Typedefs
	typedef ::e4c::impl::reference< EntryFlow__to_tag > _to_t;
	typedef ::e4c::impl::reference< EntryFlow__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_ENTRYFLOW__HPP
