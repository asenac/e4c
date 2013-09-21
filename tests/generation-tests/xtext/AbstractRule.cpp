
#include "AbstractRule.hpp"
#include <xtext/TypeRef.hpp>
#include <xtext/AbstractElement.hpp>

using namespace xtext;

AbstractRule::AbstractRule() : 
	m_name(),
    m_type(),
    m_alternatives()
{
}

AbstractRule::~AbstractRule()
{
}

void AbstractRule::setName(name_t _name)
{
	m_name = _name;;
}

AbstractRule::name_t AbstractRule::getName() const
{
	return m_name;
}

AbstractRule::type_t AbstractRule::getType() const
{
	return e4c::returned(m_type);
}

AbstractRule::alternatives_t AbstractRule::getAlternatives() const
{
	return e4c::returned(m_alternatives);
}



