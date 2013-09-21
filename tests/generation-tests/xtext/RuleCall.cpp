
#include "RuleCall.hpp"
#include <xtext/AbstractRule.hpp>

using namespace xtext;

RuleCall::RuleCall() : 
	m_rule()
{
}

RuleCall::~RuleCall()
{
}

RuleCall::rule_t RuleCall::getRule() const
{
	return e4c::returned(m_rule);
}



