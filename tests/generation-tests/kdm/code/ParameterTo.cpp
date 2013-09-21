
#include "ParameterTo.hpp"
#include <kdm/code/CodeItem.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

using namespace kdm::code;

ParameterTo::ParameterTo() : 
	m_to(),
    m_from()
{
}

ParameterTo::~ParameterTo()
{
}

ParameterTo::to_t ParameterTo::getTo() const
{
	return e4c::returned(m_to);
}

ParameterTo::from_t ParameterTo::getFrom() const
{
	return e4c::returned(m_from);
}



