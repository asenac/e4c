
#include "HasState.hpp"
#include <kdm/event/EventPackage.hpp>
#include <kdm/event/AbstractEventElement.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::event;

/*PROTECTED REGION ID(kdm::event::HasState include) START*/
/*PROTECTED REGION END*/

HasState::HasState() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(HasState constructor) START*/
	/*PROTECTED REGION END*/
}

HasState::~HasState()
{
	/*PROTECTED REGION ID(HasState destructor) START*/
	/*PROTECTED REGION END*/
}

HasState::to_t HasState::getTo() const
{
	return e4c::returned(m_to);
}

void HasState::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

HasState::from_t HasState::getFrom() const
{
	return e4c::returned(m_from);
}

void HasState::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::event::HasState implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr HasState::eClassImpl() const
{
	return EventPackage::_instance()->getHasState();
}
 
