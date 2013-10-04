
#include "Check.hpp"
#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::declaration;

/*PROTECTED REGION ID(xpand3::declaration::Check include) START*/
/*PROTECTED REGION END*/

Check::Check() : 
	m_errorSeverity(),
    m_msg(),
    m_constraint(),
    m_feature()
{
	/*PROTECTED REGION ID(Check constructor) START*/
	/*PROTECTED REGION END*/
}

Check::~Check()
{
	/*PROTECTED REGION ID(Check destructor) START*/
	/*PROTECTED REGION END*/
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


void Check::setMsg(msg_t msg_)
{
	m_msg.reset(msg_);
}

Check::msg_t Check::releaseMsg()
{
	return m_msg.release();
}

Check::constraint_t Check::getConstraint() const
{
	return e4c::returned(m_constraint);
}


void Check::setConstraint(constraint_t constraint_)
{
	m_constraint.reset(constraint_);
}

Check::constraint_t Check::releaseConstraint()
{
	return m_constraint.release();
}

void Check::setFeature(feature_t _feature)
{
	m_feature = _feature;;
}

Check::feature_t Check::getFeature() const
{
	return m_feature;
}



/*PROTECTED REGION ID(xpand3::declaration::Check implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Check::eClassImpl() const
{
	return DeclarationPackage::_instance()->getCheck();
}
 
