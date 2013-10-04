
#include "ConsumesEvent.hpp"
#include <kdm/event/EventPackage.hpp>
#include <kdm/event/Event.hpp>
#include <kdm/event/Transition.hpp>

using namespace kdm::event;

/*PROTECTED REGION ID(kdm::event::ConsumesEvent include) START*/
/*PROTECTED REGION END*/

ConsumesEvent::ConsumesEvent() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(ConsumesEvent constructor) START*/
	/*PROTECTED REGION END*/
}

ConsumesEvent::~ConsumesEvent()
{
	/*PROTECTED REGION ID(ConsumesEvent destructor) START*/
	/*PROTECTED REGION END*/
}

ConsumesEvent::to_t ConsumesEvent::getTo() const
{
	return e4c::returned(m_to);
}

void ConsumesEvent::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

ConsumesEvent::from_t ConsumesEvent::getFrom() const
{
	return e4c::returned(m_from);
}

void ConsumesEvent::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::event::ConsumesEvent implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ConsumesEvent::eClassImpl() const
{
	return EventPackage::_instance()->getConsumesEvent();
}
 
