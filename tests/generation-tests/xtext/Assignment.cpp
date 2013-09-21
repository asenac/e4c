
#include "Assignment.hpp"
#include <xtext/AbstractElement.hpp>

using namespace xtext;

Assignment::Assignment() : 
	m_feature(),
    m_operator(),
    m_terminal()
{
}

Assignment::~Assignment()
{
}

void Assignment::setFeature(feature_t _feature)
{
	m_feature = _feature;;
}

Assignment::feature_t Assignment::getFeature() const
{
	return m_feature;
}

void Assignment::setOperator(operator_t _operator)
{
	m_operator = _operator;;
}

Assignment::operator_t Assignment::getOperator() const
{
	return m_operator;
}

Assignment::terminal_t Assignment::getTerminal() const
{
	return e4c::returned(m_terminal);
}



