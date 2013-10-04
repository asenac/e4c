
#include "Action.hpp"
#include <xtext/XtextPackage.hpp>
#include <xtext/TypeRef.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::Action include) START*/
/*PROTECTED REGION END*/

Action::Action() : 
	m_type(),
    m_feature(),
    m_operator()
{
	/*PROTECTED REGION ID(Action constructor) START*/
	/*PROTECTED REGION END*/
}

Action::~Action()
{
	/*PROTECTED REGION ID(Action destructor) START*/
	/*PROTECTED REGION END*/
}

Action::type_t Action::getType() const
{
	return e4c::returned(m_type);
}


void Action::setType(type_t type_)
{
	m_type.reset(type_);
}

Action::type_t Action::releaseType()
{
	return m_type.release();
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



/*PROTECTED REGION ID(xtext::Action implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Action::eClassImpl() const
{
	return XtextPackage::_instance()->getAction();
}
 
