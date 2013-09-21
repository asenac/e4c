
#include "UIEvent.hpp"

using namespace kdm::ui;

UIEvent::UIEvent() : 
	m_kind()
{
}

UIEvent::~UIEvent()
{
}

void UIEvent::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

UIEvent::kind_t UIEvent::getKind() const
{
	return m_kind;
}



