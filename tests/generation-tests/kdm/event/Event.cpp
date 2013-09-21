
#include "Event.hpp"

using namespace kdm::event;

Event::Event() : 
	m_kind()
{
}

Event::~Event()
{
}

void Event::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

Event::kind_t Event::getKind() const
{
	return m_kind;
}



