
#include "EEnumLiteral.hpp"
#include <ecore/EEnum.hpp>

using namespace ecore;

EEnumLiteral::EEnumLiteral() : 
	m_value(),
    m_instance(),
    m_literal(),
    m_eEnum()
{
}

EEnumLiteral::~EEnumLiteral()
{
}

void EEnumLiteral::setValue(value_t _value)
{
	m_value = _value;;
}

value_t EEnumLiteral::getValue() const
{
	return m_value;
}

void EEnumLiteral::setInstance(instance_t _instance)
{
	m_instance = _instance;;
}

instance_t EEnumLiteral::getInstance() const
{
	return m_instance;
}

void EEnumLiteral::setLiteral(literal_t _literal)
{
	m_literal = _literal;;
}

literal_t EEnumLiteral::getLiteral() const
{
	return m_literal;
}



