
#include "ControlFlow.hpp"
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

ControlFlow::ControlFlow() : 
	m_to(),
    m_from()
{
}

ControlFlow::~ControlFlow()
{
}

ControlFlow::to_t ControlFlow::getTo() const
{
	return e4c::returned(m_to);
}

ControlFlow::from_t ControlFlow::getFrom() const
{
	return e4c::returned(m_from);
}



