
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

Action::type_t Action::getType() const
{
	return e4c::returned(m_type);
}

void Action::setFeature(feature_t _feature)
{
	m_feature = _feature;;
}

Action::feature_t Action::getFeature() const
{
	return m_feature;
}

void Action::setOperator(operator_t _operator)
{
	m_operator = _operator;;
}

Action::operator_t Action::getOperator() const
{
	return m_operator;
}



