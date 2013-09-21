
#include "ExitFlow.hpp"
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

ExitFlow::ExitFlow() : 
	m_to(),
    m_from()
{
}

ExitFlow::~ExitFlow()
{
}

ExitFlow::to_t ExitFlow::getTo() const
{
	return e4c::returned(m_to);
}

ExitFlow::from_t ExitFlow::getFrom() const
{
	return e4c::returned(m_from);
}



