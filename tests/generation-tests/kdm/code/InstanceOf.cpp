
#include "InstanceOf.hpp"
#include <kdm/code/TemplateUnit.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

using namespace kdm::code;

InstanceOf::InstanceOf() : 
	m_to(),
    m_from()
{
}

InstanceOf::~InstanceOf()
{
}

InstanceOf::to_t InstanceOf::getTo() const
{
	return e4c::returned(m_to);
}

InstanceOf::from_t InstanceOf::getFrom() const
{
	return e4c::returned(m_from);
}



