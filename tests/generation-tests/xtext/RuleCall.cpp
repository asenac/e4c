
#include "RuleCall.hpp"
#include <xtext/XtextPackage.hpp>
#include <xtext/AbstractRule.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::RuleCall include) START*/
/*PROTECTED REGION END*/

RuleCall::RuleCall() : 
	m_rule()
{
	/*PROTECTED REGION ID(RuleCall constructor) START*/
	/*PROTECTED REGION END*/
}

RuleCall::~RuleCall()
{
	/*PROTECTED REGION ID(RuleCall destructor) START*/
	/*PROTECTED REGION END*/
}

RuleCall::rule_t RuleCall::getRule() const
{
	return e4c::returned(m_rule);
}

void RuleCall::setRule(rule_t rule_)
{
	if (m_rule == rule_)
		return;
	m_rule = rule_;
}



/*PROTECTED REGION ID(xtext::RuleCall implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr RuleCall::eClassImpl() const
{
	return XtextPackage::_instance()->getRuleCall();
}
 
