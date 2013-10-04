
#include "Event.hpp"
#include <kdm/event/EventPackage.hpp>

using namespace kdm::event;

/*PROTECTED REGION ID(kdm::event::Event include) START*/
/*PROTECTED REGION END*/

Event::Event() : 
	m_kind()
{
	/*PROTECTED REGION ID(Event constructor) START*/
	/*PROTECTED REGION END*/
}

Event::~Event()
{
	/*PROTECTED REGION ID(Event destructor) START*/
	/*PROTECTED REGION END*/
}

void Event::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

Event::kind_t Event::getKind() const
{
	return m_kind;
}



/*PROTECTED REGION ID(kdm::event::Event implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Event::eClassImpl() const
{
	return EventPackage::_instance()->getEvent();
}
 
