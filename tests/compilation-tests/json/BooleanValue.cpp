
#include "BooleanValue.hpp"
#include <json/JsonPackage.hpp>

using namespace json;

/*PROTECTED REGION ID(json::BooleanValue include) START*/
/*PROTECTED REGION END*/

BooleanValue::BooleanValue() : 
	m_value()
{
	/*PROTECTED REGION ID(BooleanValue constructor) START*/
	/*PROTECTED REGION END*/
}

BooleanValue::~BooleanValue()
{
	/*PROTECTED REGION ID(BooleanValue destructor) START*/
	/*PROTECTED REGION END*/
}

void BooleanValue::setValue(value_t _value)
{
	m_value = _value;;
}

BooleanValue::value_t BooleanValue::getValue() const
{
	return m_value;
}



/*PROTECTED REGION ID(json::BooleanValue implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr BooleanValue::eClassImpl() const
{
	return JsonPackage::_instance()->getBooleanValue();
}
 
