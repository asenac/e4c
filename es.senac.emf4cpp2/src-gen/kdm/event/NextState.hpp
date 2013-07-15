
#ifndef EMF_CPP_KDM_EVENT_NEXTSTATE__HPP
#define EMF_CPP_KDM_EVENT_NEXTSTATE__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/AbstractEventRelationship.hpp>


namespace kdm
{
namespace event
{


// kdm::event::NextState
class NextState :  public virtual ::kdm::event::AbstractEventRelationship
{
public:

	typedef NextState_ptr ptr_type;

	NextState();
	virtual ~NextState();

	// Typedefs
	typedef ::e4c::impl::reference< NextState__to_tag > _to_t;
	typedef ::e4c::impl::reference< NextState__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_NEXTSTATE__HPP
