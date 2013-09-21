
#include "GlobalVarExpression.hpp"
#include <xpand3/Identifier.hpp>

using namespace xpand3::expression;

GlobalVarExpression::GlobalVarExpression() : 
	m_globalVarName()
{
}

GlobalVarExpression::~GlobalVarExpression()
{
}

GlobalVarExpression::globalVarName_t GlobalVarExpression::getGlobalVarName() const
{
	return e4c::returned(m_globalVarName);
}



