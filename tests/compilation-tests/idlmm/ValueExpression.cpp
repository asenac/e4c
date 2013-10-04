
#include "ValueExpression.hpp"
#include <idlmm/IdlmmPackage.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::ValueExpression include) START*/
/*PROTECTED REGION END*/

ValueExpression::ValueExpression() : 
	m_value()
{
	/*PROTECTED REGION ID(ValueExpression constructor) START*/
	/*PROTECTED REGION END*/
}

ValueExpression::~ValueExpression()
{
	/*PROTECTED REGION ID(ValueExpression destructor) START*/
	/*PROTECTED REGION END*/
}

void ValueExpression::setValue(value_t _value)
{
	m_value = _value;;
}

ValueExpression::value_t ValueExpression::getValue() const
{
	return m_value;
}



/*PROTECTED REGION ID(idlmm::ValueExpression implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ValueExpression::eClassImpl() const
{
	return IdlmmPackage::_instance()->getValueExpression();
}
 
