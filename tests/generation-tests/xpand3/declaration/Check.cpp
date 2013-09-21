
#include "Check.hpp"
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::declaration;

Check::Check() : 
	m_errorSeverity(),
    m_msg(),
    m_constraint(),
    m_feature()
{
}

Check::~Check()
{
}

void Check::setErrorSeverity(errorSeverity_t _errorSeverity)
{
	m_errorSeverity = _errorSeverity;;
}

Check::errorSeverity_t Check::getErrorSeverity() const
{
	return m_errorSeverity;
}

Check::msg_t Check::getMsg() const
{
	return e4c::returned(m_msg);
}

Check::constraint_t Check::getConstraint() const
{
	return e4c::returned(m_constraint);
}

void Check::setFeature(feature_t _feature)
{
	m_feature = _feature;;
}

Check::feature_t Check::getFeature() const
{
	return m_feature;
}



