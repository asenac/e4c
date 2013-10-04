
#include "OperationCall.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::OperationCall include) START*/
/*PROTECTED REGION END*/

OperationCall::OperationCall() : 
	m_params()
{
	/*PROTECTED REGION ID(OperationCall constructor) START*/
	/*PROTECTED REGION END*/
}

OperationCall::~OperationCall()
{
	/*PROTECTED REGION ID(OperationCall destructor) START*/
	/*PROTECTED REGION END*/
}

OperationCall::params_t OperationCall::getParams() const
{
	return e4c::returned(m_params);
}


void OperationCall::addParams(xpand3::expression::AbstractExpression_ptr params_)
{
	m_params.push_back(std::unique_ptr < xpand3::expression::AbstractExpression >(params_));
}

void OperationCall::addAllParams(const params_t& params_)
{
	for (auto i = params_.begin(); i != params_.end(); i++)
		addParams(*i);
}



/*PROTECTED REGION ID(xpand3::expression::OperationCall implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr OperationCall::eClassImpl() const
{
	return ExpressionPackage::_instance()->getOperationCall();
}
 
