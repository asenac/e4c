
#include "StringValue.hpp"
#include <json/JsonPackage.hpp>

using namespace json;

/*PROTECTED REGION ID(json::StringValue include) START*/
/*PROTECTED REGION END*/

StringValue::StringValue() :
    m_value()
{
    /*PROTECTED REGION ID(StringValue constructor) START*/
    /*PROTECTED REGION END*/
}

StringValue::~StringValue()
{
    /*PROTECTED REGION ID(StringValue destructor) START*/
    /*PROTECTED REGION END*/
}

void StringValue::setValue(value_t _value)
{
    m_value = _value;;
}

StringValue::value_t StringValue::getValue() const
{
    return m_value;
}



/*PROTECTED REGION ID(json::StringValue implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr StringValue::eClassImpl() const
{
    return JsonPackage::_instance()->getStringValue();
}

