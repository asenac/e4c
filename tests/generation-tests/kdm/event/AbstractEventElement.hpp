
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
	void addSource(kdm::source::SourceRef_ptr source_);
	void addAllSource(const source_t& source_);
	eventRelation_t getEventRelation() const;
	void addEventRelation(kdm::event::AbstractEventRelationship_ptr eventRelation_);
	void addAllEventRelation(const eventRelation_t& eventRelation_);
	abstraction_t getAbstraction() const;
	void addAbstraction(kdm::action::ActionElement_ptr abstraction_);
	void addAllAbstraction(const abstraction_t& abstraction_);
	implementation_t getImplementation() const;
	void addImplementation(kdm::code::AbstractCodeElement_ptr implementation_);
	void addAllImplementation(const implementation_t& implementation_);
	

	/*PROTECTED REGION ID(kdm::event::AbstractEventElement public) START*/
	/*PROTECTED REGION END*/
		
protected:
	AbstractEventElement();

	friend class EventPackage;

	std::set < std::unique_ptr < kdm::source::SourceRef > > m_source;
	std::set < std::unique_ptr < kdm::event::AbstractEventRelationship > > m_eventRelation;
	std::vector < std::unique_ptr < kdm::action::ActionElement > > m_abstraction;
	std::set < kdm::code::AbstractCodeElement_ptr > m_implementation;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::event::AbstractEventElement protected) START*/
	/*PROTECTED REGION END*/
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_ABSTRACTEVENTELEMENT__HPP
