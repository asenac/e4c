#include "JsonPackage.hpp"
#include "JsonFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace json;

JsonPackage::JsonPackage()
{
	m_eFactoryInstance = JsonFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	::ecore::EClass_ptr ObjectValue_ = ecoreFactory->createEClass();
	ObjectValue_->setName("ObjectValue");
	// m_eClassifiers.push_back(ObjectValue_);
	::ecore::EClass_ptr NVPair_ = ecoreFactory->createEClass();
	NVPair_->setName("NVPair");
	// m_eClassifiers.push_back(NVPair_);
	::ecore::EClass_ptr Value_ = ecoreFactory->createEClass();
	Value_->setName("Value");
	// m_eClassifiers.push_back(Value_);
	::ecore::EClass_ptr StringValue_ = ecoreFactory->createEClass();
	StringValue_->setName("StringValue");
	// m_eClassifiers.push_back(StringValue_);
	::ecore::EClass_ptr NumberValue_ = ecoreFactory->createEClass();
	NumberValue_->setName("NumberValue");
	// m_eClassifiers.push_back(NumberValue_);
	::ecore::EClass_ptr BooleanValue_ = ecoreFactory->createEClass();
	BooleanValue_->setName("BooleanValue");
	// m_eClassifiers.push_back(BooleanValue_);
	::ecore::EClass_ptr ArrayValue_ = ecoreFactory->createEClass();
	ArrayValue_->setName("ArrayValue");
	// m_eClassifiers.push_back(ArrayValue_);
	::ecore::EClass_ptr NullValue_ = ecoreFactory->createEClass();
	NullValue_->setName("NullValue");
	// m_eClassifiers.push_back(NullValue_);
	
	
	// ObjectValue_->addESuperType(Value_);
	// StringValue_->addESuperType(Value_);
	// NumberValue_->addESuperType(Value_);
	// BooleanValue_->addESuperType(Value_);
	// ArrayValue_->addESuperType(Value_);
	// NullValue_->addESuperType(Value_);
	
	
	
	
}

const JsonPackage_ptr JsonPackage::_instance()
{
	static JsonPackage __instance;
	return &__instance;
}

e4c::tag_t JsonPackage::getTag_ObjectValue() const
{
	return e4c::tag< ObjectValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_NVPair() const
{
	return e4c::tag< NVPair >::get();
}
 
e4c::tag_t JsonPackage::getTag_Value() const
{
	return e4c::tag< Value >::get();
}
 
e4c::tag_t JsonPackage::getTag_StringValue() const
{
	return e4c::tag< StringValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_NumberValue() const
{
	return e4c::tag< NumberValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_BooleanValue() const
{
	return e4c::tag< BooleanValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_ArrayValue() const
{
	return e4c::tag< ArrayValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_NullValue() const
{
	return e4c::tag< NullValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_ObjectValue__members() const
{
	return e4c::tag< ObjectValue__members_tag >::get();
}

e4c::tag_t JsonPackage::getTag_NVPair__name() const
{
	return e4c::tag< NVPair__name_tag >::get();
}

e4c::tag_t JsonPackage::getTag_NVPair__value() const
{
	return e4c::tag< NVPair__value_tag >::get();
}

e4c::tag_t JsonPackage::getTag_StringValue__value() const
{
	return e4c::tag< StringValue__value_tag >::get();
}

e4c::tag_t JsonPackage::getTag_NumberValue__value() const
{
	return e4c::tag< NumberValue__value_tag >::get();
}

e4c::tag_t JsonPackage::getTag_BooleanValue__value() const
{
	return e4c::tag< BooleanValue__value_tag >::get();
}

e4c::tag_t JsonPackage::getTag_ArrayValue__values() const
{
	return e4c::tag< ArrayValue__values_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_json()
{
	return ::json::JsonPackage::_instance();
}
