
#ifndef EMF_CPP_KDM_EVENT_ABSTRACTEVENTELEMENT__HPP
#define EMF_CPP_KDM_EVENT_ABSTRACTEVENTELEMENT__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/core/KDMEntity.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


// kdm::event::AbstractEventElement
class AbstractEventElement :  public virtual ::kdm::core::KDMEntity
{
public:

	typedef AbstractEventElement_ptr ptr_type;
	
	virtual ~AbstractEventElement();

	typedef boost::ptr_set < kdm::source::SourceRef > source_t;
	typedef boost::ptr_set < kdm::event::AbstractEventRelationship > eventRelation_t;
	typedef boost::ptr_vector < kdm::action::ActionElement > abstraction_t;
	typedef std::vector < kdm::code::AbstractCodeElement_ptr > implementation_t;

	
	// TODO
	// TODO
	// TODO
	// TODO

	
protected:
	AbstractEventElement();

	source_t m_source;
	eventRelation_t m_eventRelation;
	abstraction_t m_abstraction;
	implementation_t m_implementation;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_ABSTRACTEVENTELEMENT__HPP
