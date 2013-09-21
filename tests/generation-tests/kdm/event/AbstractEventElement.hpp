
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

	typedef std::set < kdm::source::SourceRef_ptr > source_t;
	typedef std::set < kdm::event::AbstractEventRelationship_ptr > eventRelation_t;
	typedef std::vector < kdm::action::ActionElement_ptr > abstraction_t;
	typedef std::set < kdm::code::AbstractCodeElement_ptr > implementation_t;

	
	source_t getSource() const;
	eventRelation_t getEventRelation() const;
	abstraction_t getAbstraction() const;
	implementation_t getImplementation() const;


	std::set < std::unique_ptr < kdm::source::SourceRef > > m_source;
	std::set < std::unique_ptr < kdm::event::AbstractEventRelationship > > m_eventRelation;
	std::vector < std::unique_ptr < kdm::action::ActionElement > > m_abstraction;
	std::set < kdm::code::AbstractCodeElement_ptr > m_implementation;

		
protected:
	AbstractEventElement();

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_ABSTRACTEVENTELEMENT__HPP
