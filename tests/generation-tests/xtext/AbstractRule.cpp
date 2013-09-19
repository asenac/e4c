
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

name_t AbstractRule::getName() const
{
	return m_name;
}



