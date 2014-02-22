
#include "NumberValue.hpp"
#include <json/JsonPackage.hpp>

using namespace json;

/*PROTECTED REGION ID(json::NumberValue include) START*/
/*PROTECTED REGION END*/

NumberValue::NumberValue() :
    m_value()
{
    /*PROTECTED REGION ID(NumberValue constructor) START*/
    /*PROTECTED REGION END*/
}

NumberValue::~NumberValue()
{
    /*PROTECTED REGION ID(NumberValue destructor) START*/
    /*PROTECTED REGION END*/
}

void NumberValue::setValue(value_t _value)
{
    m_value = _value;;
}

NumberValue::value_t NumberValue::getValue() const
{
    return m_value;
}



/*PROTECTED REGION ID(json::NumberValue implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr NumberValue::eClassImpl() const
{
    return JsonPackage::_instance()->getNumberValue();
}

