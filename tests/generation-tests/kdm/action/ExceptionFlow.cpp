
#include "ExceptionFlow.hpp"
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

ExceptionFlow::ExceptionFlow() : 
	m_to(),
    m_from()
{
}

ExceptionFlow::~ExceptionFlow()
{
}

ExceptionFlow::to_t ExceptionFlow::getTo() const
{
	return e4c::returned(m_to);
}

ExceptionFlow::from_t ExceptionFlow::getFrom() const
{
	return e4c::returned(m_from);
}



