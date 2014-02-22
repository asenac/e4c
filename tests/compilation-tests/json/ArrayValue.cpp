
#include "ArrayValue.hpp"
#include <json/JsonPackage.hpp>
#include <json/Value.hpp>

using namespace json;

/*PROTECTED REGION ID(json::ArrayValue include) START*/
/*PROTECTED REGION END*/

ArrayValue::ArrayValue() :
    m_values()
{
    /*PROTECTED REGION ID(ArrayValue constructor) START*/
    /*PROTECTED REGION END*/
}

ArrayValue::~ArrayValue()
{
    /*PROTECTED REGION ID(ArrayValue destructor) START*/
    /*PROTECTED REGION END*/
}

ArrayValue::values_t ArrayValue::getValues() const
{
    return e4c::returned(m_values);
}


void ArrayValue::addValues(json::Value_ptr values_)
{
    m_values.push_back(std::unique_ptr < json::Value >(values_));
}

void ArrayValue::addAllValues(const values_t& values_)
{
    for (auto i = values_.begin(); i != values_.end(); i++)
        addValues(*i);
}



/*PROTECTED REGION ID(json::ArrayValue implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ArrayValue::eClassImpl() const
{
    return JsonPackage::_instance()->getArrayValue();
}

