
#include "NextState.hpp"
#include <kdm/event/EventPackage.hpp>
#include <kdm/event/State.hpp>
#include <kdm/event/Transition.hpp>

using namespace kdm::event;

/*PROTECTED REGION ID(kdm::event::NextState include) START*/
/*PROTECTED REGION END*/

NextState::NextState() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(NextState constructor) START*/
	/*PROTECTED REGION END*/
}

NextState::~NextState()
{
	/*PROTECTED REGION ID(NextState destructor) START*/
	/*PROTECTED REGION END*/
}

NextState::to_t NextState::getTo() const
{
	return e4c::returned(m_to);
}

void NextState::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

NextState::from_t NextState::getFrom() const
{
	return e4c::returned(m_from);
}

void NextState::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::event::NextState implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr NextState::eClassImpl() const
{
	return EventPackage::_instance()->getNextState();
}
 
