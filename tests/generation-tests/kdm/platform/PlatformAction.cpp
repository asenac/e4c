
#include "PlatformAction.hpp"
#include <kdm/platform/PlatformEvent.hpp>

using namespace kdm::platform;

PlatformAction::PlatformAction() : 
	m_kind(),
    m_platformElement()
{
}

PlatformAction::~PlatformAction()
{
}

void PlatformAction::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

PlatformAction::kind_t PlatformAction::getKind() const
{
	return m_kind;
}

PlatformAction::platformElement_t PlatformAction::getPlatformElement() const
{
	return e4c::returned(m_platformElement);
}



