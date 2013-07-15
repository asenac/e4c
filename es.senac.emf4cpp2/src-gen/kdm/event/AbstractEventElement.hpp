
#ifndef EMF_CPP_KDM_EVENT_ABSTRACTEVENTELEMENT__HPP
#define EMF_CPP_KDM_EVENT_ABSTRACTEVENTELEMENT__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/core/KDMEntity.hpp>


namespace kdm
{
namespace event
{


// kdm::event::AbstractEventElement
class AbstractEventElement :  public virtual ::kdm::core::KDMEntity
{
public:

	typedef AbstractEventElement_ptr ptr_type;

	AbstractEventElement();
	virtual ~AbstractEventElement();

	// Typedefs
	typedef ::e4c::impl::reference< AbstractEventElement__source_tag > _source_t;
	typedef ::e4c::impl::reference< AbstractEventElement__eventRelation_tag > _eventRelation_t;
	typedef ::e4c::impl::reference< AbstractEventElement__abstraction_tag > _abstraction_t;
	typedef ::e4c::impl::reference< AbstractEventElement__implementation_tag > _implementation_t;

	
	// Members
	_source_t source;
	_eventRelation_t eventRelation;
	_abstraction_t abstraction;
	_implementation_t implementation;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_ABSTRACTEVENTELEMENT__HPP
