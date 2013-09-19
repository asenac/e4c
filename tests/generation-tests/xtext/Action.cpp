
#include "Action.hpp"
#include <xtext/TypeRef.hpp>

using namespace xtext;

Action::Action() : 
	m_type(),
    m_feature(),
    m_operator()
{
}

Action::~Action()
{
}

void Action::setFeature(feature_t _feature)
{
	m_feature = _feature;;
}

feature_t Action::getFeature() const
{
	return m_feature;
}

void Action::setOperator(operator_t _operator)
{
	m_operator = _operator;;
}

operator_t Action::getOperator() const
{
	return m_operator;
}



