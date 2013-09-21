
#include "FeatureCall.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::expression;

FeatureCall::FeatureCall() : 
	m_target(),
    m_name()
{
}

FeatureCall::~FeatureCall()
{
}

FeatureCall::target_t FeatureCall::getTarget() const
{
	return e4c::returned(m_target);
}

FeatureCall::name_t FeatureCall::getName() const
{
	return e4c::returned(m_name);
}



