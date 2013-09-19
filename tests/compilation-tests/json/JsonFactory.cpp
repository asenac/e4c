#include "JsonFactory.hpp"
#include "JsonPackage.hpp"
#include "include.hpp"

using namespace json;

JsonFactory::JsonFactory()
{
	m_ePackage = JsonPackage::_instance();
	// std::bind(&JsonFactory::createObjectValue, this);
	// m_ePackage->getTag_ObjectValue();
	// std::bind(&JsonFactory::createNVPair, this);
	// m_ePackage->getTag_NVPair();
	// std::bind(&JsonFactory::createStringValue, this);
	// m_ePackage->getTag_StringValue();
	// std::bind(&JsonFactory::createNumberValue, this);
	// m_ePackage->getTag_NumberValue();
	// std::bind(&JsonFactory::createBooleanValue, this);
	// m_ePackage->getTag_BooleanValue();
	// std::bind(&JsonFactory::createArrayValue, this);
	// m_ePackage->getTag_ArrayValue();
	// std::bind(&JsonFactory::createNullValue, this);
	// m_ePackage->getTag_NullValue();
}

const JsonFactory_ptr JsonFactory::_instance()
{
	static JsonFactory __instance;
	return &__instance;
}

ObjectValue_ptr JsonFactory::createObjectValue() const
{
	return new ObjectValue();
}

NVPair_ptr JsonFactory::createNVPair() const
{
	return new NVPair();
}

StringValue_ptr JsonFactory::createStringValue() const
{
	return new StringValue();
}

NumberValue_ptr JsonFactory::createNumberValue() const
{
	return new NumberValue();
}

BooleanValue_ptr JsonFactory::createBooleanValue() const
{
	return new BooleanValue();
}

ArrayValue_ptr JsonFactory::createArrayValue() const
{
	return new ArrayValue();
}

NullValue_ptr JsonFactory::createNullValue() const
{
	return new NullValue();
}

