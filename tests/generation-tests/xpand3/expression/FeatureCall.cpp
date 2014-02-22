
#include "FeatureCall.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::FeatureCall include) START*/
/*PROTECTED REGION END*/

FeatureCall::FeatureCall() :
    m_target(),
    m_name()
{
    /*PROTECTED REGION ID(FeatureCall constructor) START*/
    /*PROTECTED REGION END*/
}

FeatureCall::~FeatureCall()
{
    /*PROTECTED REGION ID(FeatureCall destructor) START*/
    /*PROTECTED REGION END*/
}

FeatureCall::target_t FeatureCall::getTarget() const
{
    return e4c::returned(m_target);
}


void FeatureCall::setTarget(target_t target_)
{
    m_target.reset(target_);
}

FeatureCall::target_t FeatureCall::releaseTarget()
{
    return m_target.release();
}

FeatureCall::name_t FeatureCall::getName() const
{
    return e4c::returned(m_name);
}


void FeatureCall::setName(name_t name_)
{
    m_name.reset(name_);
}

FeatureCall::name_t FeatureCall::releaseName()
{
    return m_name.release();
}



/*PROTECTED REGION ID(xpand3::expression::FeatureCall implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr FeatureCall::eClassImpl() const
{
    return ExpressionPackage::_instance()->getFeatureCall();
}

