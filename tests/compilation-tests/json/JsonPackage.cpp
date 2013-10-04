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
	
	
	
	m_ObjectValue = ecoreFactory->createEClass();
	m_ObjectValue->setName("ObjectValue");
	addEClassifiers(m_ObjectValue);
	m_NVPair = ecoreFactory->createEClass();
	m_NVPair->setName("NVPair");
	addEClassifiers(m_NVPair);
	m_Value = ecoreFactory->createEClass();
	m_Value->setName("Value");
	addEClassifiers(m_Value);
	m_StringValue = ecoreFactory->createEClass();
	m_StringValue->setName("StringValue");
	addEClassifiers(m_StringValue);
	m_NumberValue = ecoreFactory->createEClass();
	m_NumberValue->setName("NumberValue");
	addEClassifiers(m_NumberValue);
	m_BooleanValue = ecoreFactory->createEClass();
	m_BooleanValue->setName("BooleanValue");
	addEClassifiers(m_BooleanValue);
	m_ArrayValue = ecoreFactory->createEClass();
	m_ArrayValue->setName("ArrayValue");
	addEClassifiers(m_ArrayValue);
	m_NullValue = ecoreFactory->createEClass();
	m_NullValue->setName("NullValue");
	addEClassifiers(m_NullValue);

	
    {
        m_ObjectValue__members = ecoreFactory->createEReference();
        m_ObjectValue__members->setName("members");
        m_ObjectValue->addEStructuralFeatures(m_ObjectValue__members);
        m_ObjectValue->addEAllStructuralFeatures(m_ObjectValue__members);
        m_ObjectValue->addEReferences(m_ObjectValue__members);
        m_ObjectValue->addEAllReferences(m_ObjectValue__members);
    }
    {
        m_NVPair__name = ecoreFactory->createEAttribute();
        m_NVPair__name->setName("name");
        m_NVPair->addEStructuralFeatures(m_NVPair__name);
        m_NVPair->addEAllStructuralFeatures(m_NVPair__name);
        m_NVPair->addEAttributes(m_NVPair__name);
        m_NVPair->addEAllAttributes(m_NVPair__name);
    }
    {
        m_NVPair__value = ecoreFactory->createEReference();
        m_NVPair__value->setName("value");
        m_NVPair->addEStructuralFeatures(m_NVPair__value);
        m_NVPair->addEAllStructuralFeatures(m_NVPair__value);
        m_NVPair->addEReferences(m_NVPair__value);
        m_NVPair->addEAllReferences(m_NVPair__value);
    }
    {
        m_StringValue__value = ecoreFactory->createEAttribute();
        m_StringValue__value->setName("value");
        m_StringValue->addEStructuralFeatures(m_StringValue__value);
        m_StringValue->addEAllStructuralFeatures(m_StringValue__value);
        m_StringValue->addEAttributes(m_StringValue__value);
        m_StringValue->addEAllAttributes(m_StringValue__value);
    }
    {
        m_NumberValue__value = ecoreFactory->createEAttribute();
        m_NumberValue__value->setName("value");
        m_NumberValue->addEStructuralFeatures(m_NumberValue__value);
        m_NumberValue->addEAllStructuralFeatures(m_NumberValue__value);
        m_NumberValue->addEAttributes(m_NumberValue__value);
        m_NumberValue->addEAllAttributes(m_NumberValue__value);
    }
    {
        m_BooleanValue__value = ecoreFactory->createEAttribute();
        m_BooleanValue__value->setName("value");
        m_BooleanValue->addEStructuralFeatures(m_BooleanValue__value);
        m_BooleanValue->addEAllStructuralFeatures(m_BooleanValue__value);
        m_BooleanValue->addEAttributes(m_BooleanValue__value);
        m_BooleanValue->addEAllAttributes(m_BooleanValue__value);
    }
    {
        m_ArrayValue__values = ecoreFactory->createEReference();
        m_ArrayValue__values->setName("values");
        m_ArrayValue->addEStructuralFeatures(m_ArrayValue__values);
        m_ArrayValue->addEAllStructuralFeatures(m_ArrayValue__values);
        m_ArrayValue->addEReferences(m_ArrayValue__values);
        m_ArrayValue->addEAllReferences(m_ArrayValue__values);
    }
	
	m_ObjectValue->addESuperTypes(m_Value);
	m_ObjectValue->addAllEAllOperations(m_Value->getEOperations());
	m_ObjectValue->addAllEAllReferences(m_Value->getEReferences());
	m_ObjectValue->addAllEAllAttributes(m_Value->getEAttributes());
	m_ObjectValue->addAllEAllStructuralFeatures(m_Value->getEStructuralFeatures());
	m_StringValue->addESuperTypes(m_Value);
	m_StringValue->addAllEAllOperations(m_Value->getEOperations());
	m_StringValue->addAllEAllReferences(m_Value->getEReferences());
	m_StringValue->addAllEAllAttributes(m_Value->getEAttributes());
	m_StringValue->addAllEAllStructuralFeatures(m_Value->getEStructuralFeatures());
	m_NumberValue->addESuperTypes(m_Value);
	m_NumberValue->addAllEAllOperations(m_Value->getEOperations());
	m_NumberValue->addAllEAllReferences(m_Value->getEReferences());
	m_NumberValue->addAllEAllAttributes(m_Value->getEAttributes());
	m_NumberValue->addAllEAllStructuralFeatures(m_Value->getEStructuralFeatures());
	m_BooleanValue->addESuperTypes(m_Value);
	m_BooleanValue->addAllEAllOperations(m_Value->getEOperations());
	m_BooleanValue->addAllEAllReferences(m_Value->getEReferences());
	m_BooleanValue->addAllEAllAttributes(m_Value->getEAttributes());
	m_BooleanValue->addAllEAllStructuralFeatures(m_Value->getEStructuralFeatures());
	m_ArrayValue->addESuperTypes(m_Value);
	m_ArrayValue->addAllEAllOperations(m_Value->getEOperations());
	m_ArrayValue->addAllEAllReferences(m_Value->getEReferences());
	m_ArrayValue->addAllEAllAttributes(m_Value->getEAttributes());
	m_ArrayValue->addAllEAllStructuralFeatures(m_Value->getEStructuralFeatures());
	m_NullValue->addESuperTypes(m_Value);
	m_NullValue->addAllEAllOperations(m_Value->getEOperations());
	m_NullValue->addAllEAllReferences(m_Value->getEReferences());
	m_NullValue->addAllEAllAttributes(m_Value->getEAttributes());
	m_NullValue->addAllEAllStructuralFeatures(m_Value->getEStructuralFeatures());
	
	
	m_ObjectValue->addFeatureAccesors(m_ObjectValue__members, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< json::ObjectValue_ptr >(o)->getMembers()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_NVPair->addFeatureAccesors(m_NVPair__name, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< json::NVPair_ptr >(o)->getName()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_NVPair->addFeatureAccesors(m_NVPair__value, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< json::NVPair_ptr >(o)->getValue()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_StringValue->addFeatureAccesors(m_StringValue__value, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< json::StringValue_ptr >(o)->getValue()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_NumberValue->addFeatureAccesors(m_NumberValue__value, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< json::NumberValue_ptr >(o)->getValue()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_BooleanValue->addFeatureAccesors(m_BooleanValue__value, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< json::BooleanValue_ptr >(o)->getValue()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ArrayValue->addFeatureAccesors(m_ArrayValue__values, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< json::ArrayValue_ptr >(o)->getValues()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	
}

const JsonPackage_ptr JsonPackage::_instance()
{
	static JsonPackage __instance;
	return &__instance;
}

ecore::EClass_ptr JsonPackage::getObjectValue() const
{
	return m_ObjectValue;
}
  	
e4c::tag_t JsonPackage::getTag_ObjectValue() const
{
	return e4c::tag< ObjectValue >::get();
}
 
ecore::EClass_ptr JsonPackage::getNVPair() const
{
	return m_NVPair;
}
  	
e4c::tag_t JsonPackage::getTag_NVPair() const
{
	return e4c::tag< NVPair >::get();
}
 
ecore::EClass_ptr JsonPackage::getValue() const
{
	return m_Value;
}
  	
e4c::tag_t JsonPackage::getTag_Value() const
{
	return e4c::tag< Value >::get();
}
 
ecore::EClass_ptr JsonPackage::getStringValue() const
{
	return m_StringValue;
}
  	
e4c::tag_t JsonPackage::getTag_StringValue() const
{
	return e4c::tag< StringValue >::get();
}
 
ecore::EClass_ptr JsonPackage::getNumberValue() const
{
	return m_NumberValue;
}
  	
e4c::tag_t JsonPackage::getTag_NumberValue() const
{
	return e4c::tag< NumberValue >::get();
}
 
ecore::EClass_ptr JsonPackage::getBooleanValue() const
{
	return m_BooleanValue;
}
  	
e4c::tag_t JsonPackage::getTag_BooleanValue() const
{
	return e4c::tag< BooleanValue >::get();
}
 
ecore::EClass_ptr JsonPackage::getArrayValue() const
{
	return m_ArrayValue;
}
  	
e4c::tag_t JsonPackage::getTag_ArrayValue() const
{
	return e4c::tag< ArrayValue >::get();
}
 
ecore::EClass_ptr JsonPackage::getNullValue() const
{
	return m_NullValue;
}
  	
e4c::tag_t JsonPackage::getTag_NullValue() const
{
	return e4c::tag< NullValue >::get();
}
 
e4c::tag_t JsonPackage::getTag_ObjectValue__members() const
{
	return e4c::tag< ObjectValue__members_tag >::get();
}

ecore::EReference_ptr JsonPackage::getObjectValue__members() const
{
	return m_ObjectValue__members;
}

e4c::tag_t JsonPackage::getTag_NVPair__name() const
{
	return e4c::tag< NVPair__name_tag >::get();
}

ecore::EAttribute_ptr JsonPackage::getNVPair__name() const
{
	return m_NVPair__name;
}

e4c::tag_t JsonPackage::getTag_NVPair__value() const
{
	return e4c::tag< NVPair__value_tag >::get();
}

ecore::EReference_ptr JsonPackage::getNVPair__value() const
{
	return m_NVPair__value;
}

e4c::tag_t JsonPackage::getTag_StringValue__value() const
{
	return e4c::tag< StringValue__value_tag >::get();
}

ecore::EAttribute_ptr JsonPackage::getStringValue__value() const
{
	return m_StringValue__value;
}

e4c::tag_t JsonPackage::getTag_NumberValue__value() const
{
	return e4c::tag< NumberValue__value_tag >::get();
}

ecore::EAttribute_ptr JsonPackage::getNumberValue__value() const
{
	return m_NumberValue__value;
}

e4c::tag_t JsonPackage::getTag_BooleanValue__value() const
{
	return e4c::tag< BooleanValue__value_tag >::get();
}

ecore::EAttribute_ptr JsonPackage::getBooleanValue__value() const
{
	return m_BooleanValue__value;
}

e4c::tag_t JsonPackage::getTag_ArrayValue__values() const
{
	return e4c::tag< ArrayValue__values_tag >::get();
}

ecore::EReference_ptr JsonPackage::getArrayValue__values() const
{
	return m_ArrayValue__values;
}


extern "C" ::ecore::EPackage_ptr e4c_json()
{
	return ::json::JsonPackage::_instance();
}
