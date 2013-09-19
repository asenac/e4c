
#include "PlatformEvent.hpp"

using namespace kdm::platform;

PlatformEvent::PlatformEvent() : 
	m_kind()
{
}

PlatformEvent::~PlatformEvent()
{
}

void PlatformEvent::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

kind_t PlatformEvent::getKind() const
{
	return m_kind;
}



