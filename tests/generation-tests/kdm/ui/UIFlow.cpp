
#include "UIFlow.hpp"
#include <kdm/ui/AbstractUIElement.hpp>

using namespace kdm::ui;

UIFlow::UIFlow() : 
	m_to(),
    m_from()
{
}

UIFlow::~UIFlow()
{
}

UIFlow::to_t UIFlow::getTo() const
{
	return e4c::returned(m_to);
}

UIFlow::from_t UIFlow::getFrom() const
{
	return e4c::returned(m_from);
}



