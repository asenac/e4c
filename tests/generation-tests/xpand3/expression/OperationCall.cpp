
#include "OperationCall.hpp"
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::expression;

OperationCall::OperationCall() : 
	m_params()
{
}

OperationCall::~OperationCall()
{
}

OperationCall::params_t OperationCall::getParams() const
{
	return e4c::returned(m_params);
}



