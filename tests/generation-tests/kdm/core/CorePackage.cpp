#include "CorePackage.hpp"
#include "CoreFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::core;

CorePackage::CorePackage()
{
	m_eFactoryInstance = CoreFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	
	
	m_Element = ecoreFactory->createEClass();
	m_Element->setName("Element");
	addEClassifiers(m_Element);
	m_ModelElement = ecoreFactory->createEClass();
	m_ModelElement->setName("ModelElement");
	addEClassifiers(m_ModelElement);
	m_KDMEntity = ecoreFactory->createEClass();
	m_KDMEntity->setName("KDMEntity");
	addEClassifiers(m_KDMEntity);
	m_KDMRelationship = ecoreFactory->createEClass();
	m_KDMRelationship->setName("KDMRelationship");
	addEClassifiers(m_KDMRelationship);
	m_AggregatedRelationship = ecoreFactory->createEClass();
	m_AggregatedRelationship->setName("AggregatedRelationship");
	addEClassifiers(m_AggregatedRelationship);
	m_String = ecoreFactory->createEDataType();
	m_String->setName("String");
	addEClassifiers(m_String);
	m_Integer = ecoreFactory->createEDataType();
	m_Integer->setName("Integer");
	addEClassifiers(m_Integer);
	m_Boolean = ecoreFactory->createEDataType();
	m_Boolean->setName("Boolean");
	addEClassifiers(m_Boolean);

    m_String->setSerializable(true);
    m_Integer->setSerializable(true);
    m_Boolean->setSerializable(true);
	
    {
        m_Element__attribute = ecoreFactory->createEReference();
        m_Element__attribute->setName("attribute");
        m_Element->addEStructuralFeatures(m_Element__attribute);
        m_Element->addEAllStructuralFeatures(m_Element__attribute);
        m_Element->addEReferences(m_Element__attribute);
        m_Element->addEAllReferences(m_Element__attribute);
    }
    {
        m_Element__annotation = ecoreFactory->createEReference();
        m_Element__annotation->setName("annotation");
        m_Element->addEStructuralFeatures(m_Element__annotation);
        m_Element->addEAllStructuralFeatures(m_Element__annotation);
        m_Element->addEReferences(m_Element__annotation);
        m_Element->addEAllReferences(m_Element__annotation);
    }
    {
        m_ModelElement__stereotype = ecoreFactory->createEReference();
        m_ModelElement__stereotype->setName("stereotype");
        m_ModelElement->addEStructuralFeatures(m_ModelElement__stereotype);
        m_ModelElement->addEAllStructuralFeatures(m_ModelElement__stereotype);
        m_ModelElement->addEReferences(m_ModelElement__stereotype);
        m_ModelElement->addEAllReferences(m_ModelElement__stereotype);
    }
    {
        m_ModelElement__taggedValue = ecoreFactory->createEReference();
        m_ModelElement__taggedValue->setName("taggedValue");
        m_ModelElement->addEStructuralFeatures(m_ModelElement__taggedValue);
        m_ModelElement->addEAllStructuralFeatures(m_ModelElement__taggedValue);
        m_ModelElement->addEReferences(m_ModelElement__taggedValue);
        m_ModelElement->addEAllReferences(m_ModelElement__taggedValue);
    }
    {
        m_KDMEntity__name = ecoreFactory->createEAttribute();
        m_KDMEntity__name->setName("name");
        m_KDMEntity->addEStructuralFeatures(m_KDMEntity__name);
        m_KDMEntity->addEAllStructuralFeatures(m_KDMEntity__name);
        m_KDMEntity->addEAttributes(m_KDMEntity__name);
        m_KDMEntity->addEAllAttributes(m_KDMEntity__name);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("createAggregation");
        m_KDMEntity->addEOperations(op);
        m_KDMEntity->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("deleteAggregation");
        m_KDMEntity->addEOperations(op);
        m_KDMEntity->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getInbound");
        m_KDMEntity->addEOperations(op);
        m_KDMEntity->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getOutbound");
        m_KDMEntity->addEOperations(op);
        m_KDMEntity->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getOwnedRelation");
        m_KDMEntity->addEOperations(op);
        m_KDMEntity->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getInAggregated");
        m_KDMEntity->addEOperations(op);
        m_KDMEntity->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getOutAggregated");
        m_KDMEntity->addEOperations(op);
        m_KDMEntity->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getOwner");
        m_KDMEntity->addEOperations(op);
        m_KDMEntity->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getOwnedElement");
        m_KDMEntity->addEOperations(op);
        m_KDMEntity->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getGroup");
        m_KDMEntity->addEOperations(op);
        m_KDMEntity->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getGroupedElement");
        m_KDMEntity->addEOperations(op);
        m_KDMEntity->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getModel");
        m_KDMEntity->addEOperations(op);
        m_KDMEntity->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getTo");
        m_KDMRelationship->addEOperations(op);
        m_KDMRelationship->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getFrom");
        m_KDMRelationship->addEOperations(op);
        m_KDMRelationship->addEAllOperations(op);
    }
    {
        m_AggregatedRelationship__from = ecoreFactory->createEReference();
        m_AggregatedRelationship__from->setName("from");
        m_AggregatedRelationship->addEStructuralFeatures(m_AggregatedRelationship__from);
        m_AggregatedRelationship->addEAllStructuralFeatures(m_AggregatedRelationship__from);
        m_AggregatedRelationship->addEReferences(m_AggregatedRelationship__from);
        m_AggregatedRelationship->addEAllReferences(m_AggregatedRelationship__from);
    }
    {
        m_AggregatedRelationship__to = ecoreFactory->createEReference();
        m_AggregatedRelationship__to->setName("to");
        m_AggregatedRelationship->addEStructuralFeatures(m_AggregatedRelationship__to);
        m_AggregatedRelationship->addEAllStructuralFeatures(m_AggregatedRelationship__to);
        m_AggregatedRelationship->addEReferences(m_AggregatedRelationship__to);
        m_AggregatedRelationship->addEAllReferences(m_AggregatedRelationship__to);
    }
    {
        m_AggregatedRelationship__relation = ecoreFactory->createEReference();
        m_AggregatedRelationship__relation->setName("relation");
        m_AggregatedRelationship->addEStructuralFeatures(m_AggregatedRelationship__relation);
        m_AggregatedRelationship->addEAllStructuralFeatures(m_AggregatedRelationship__relation);
        m_AggregatedRelationship->addEReferences(m_AggregatedRelationship__relation);
        m_AggregatedRelationship->addEAllReferences(m_AggregatedRelationship__relation);
    }
    {
        m_AggregatedRelationship__density = ecoreFactory->createEAttribute();
        m_AggregatedRelationship__density->setName("density");
        m_AggregatedRelationship->addEStructuralFeatures(m_AggregatedRelationship__density);
        m_AggregatedRelationship->addEAllStructuralFeatures(m_AggregatedRelationship__density);
        m_AggregatedRelationship->addEAttributes(m_AggregatedRelationship__density);
        m_AggregatedRelationship->addEAllAttributes(m_AggregatedRelationship__density);
    }
	
	m_ModelElement->addESuperTypes(m_Element);
	m_ModelElement->addAllEAllOperations(m_Element->getEOperations());
	m_ModelElement->addAllEAllReferences(m_Element->getEReferences());
	m_ModelElement->addAllEAllAttributes(m_Element->getEAttributes());
	m_ModelElement->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());
	m_KDMEntity->addESuperTypes(m_ModelElement);
	m_KDMEntity->addAllEAllOperations(m_ModelElement->getEOperations());
	m_KDMEntity->addAllEAllReferences(m_ModelElement->getEReferences());
	m_KDMEntity->addAllEAllAttributes(m_ModelElement->getEAttributes());
	m_KDMEntity->addAllEAllStructuralFeatures(m_ModelElement->getEStructuralFeatures());
	m_KDMRelationship->addESuperTypes(m_ModelElement);
	m_KDMRelationship->addAllEAllOperations(m_ModelElement->getEOperations());
	m_KDMRelationship->addAllEAllReferences(m_ModelElement->getEReferences());
	m_KDMRelationship->addAllEAllAttributes(m_ModelElement->getEAttributes());
	m_KDMRelationship->addAllEAllStructuralFeatures(m_ModelElement->getEStructuralFeatures());
	m_AggregatedRelationship->addESuperTypes(m_ModelElement);
	m_AggregatedRelationship->addAllEAllOperations(m_ModelElement->getEOperations());
	m_AggregatedRelationship->addAllEAllReferences(m_ModelElement->getEReferences());
	m_AggregatedRelationship->addAllEAllAttributes(m_ModelElement->getEAttributes());
	m_AggregatedRelationship->addAllEAllStructuralFeatures(m_ModelElement->getEStructuralFeatures());
	
	
	m_Element->addFeatureAccesors(m_Element__attribute, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::core::Element_ptr >(o)->getAttribute()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Element->addFeatureAccesors(m_Element__annotation, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::core::Element_ptr >(o)->getAnnotation()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ModelElement->addFeatureAccesors(m_ModelElement__stereotype, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::core::ModelElement_ptr >(o)->getStereotype()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ModelElement->addFeatureAccesors(m_ModelElement__taggedValue, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::core::ModelElement_ptr >(o)->getTaggedValue()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_KDMEntity->addFeatureAccesors(m_KDMEntity__name, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::core::KDMEntity_ptr >(o)->getName()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_AggregatedRelationship->addFeatureAccesors(m_AggregatedRelationship__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::core::AggregatedRelationship_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_AggregatedRelationship->addFeatureAccesors(m_AggregatedRelationship__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::core::AggregatedRelationship_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_AggregatedRelationship->addFeatureAccesors(m_AggregatedRelationship__relation, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::core::AggregatedRelationship_ptr >(o)->getRelation()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_AggregatedRelationship->addFeatureAccesors(m_AggregatedRelationship__density, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::core::AggregatedRelationship_ptr >(o)->getDensity()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	
}

const CorePackage_ptr CorePackage::_instance()
{
	static CorePackage __instance;
	return &__instance;
}

ecore::EClass_ptr CorePackage::getElement() const
{
	return m_Element;
}
  	
e4c::tag_t CorePackage::getTag_Element() const
{
	return e4c::tag< Element >::get();
}
 
ecore::EClass_ptr CorePackage::getModelElement() const
{
	return m_ModelElement;
}
  	
e4c::tag_t CorePackage::getTag_ModelElement() const
{
	return e4c::tag< ModelElement >::get();
}
 
ecore::EClass_ptr CorePackage::getKDMEntity() const
{
	return m_KDMEntity;
}
  	
e4c::tag_t CorePackage::getTag_KDMEntity() const
{
	return e4c::tag< KDMEntity >::get();
}
 
ecore::EClass_ptr CorePackage::getKDMRelationship() const
{
	return m_KDMRelationship;
}
  	
e4c::tag_t CorePackage::getTag_KDMRelationship() const
{
	return e4c::tag< KDMRelationship >::get();
}
 
ecore::EClass_ptr CorePackage::getAggregatedRelationship() const
{
	return m_AggregatedRelationship;
}
  	
e4c::tag_t CorePackage::getTag_AggregatedRelationship() const
{
	return e4c::tag< AggregatedRelationship >::get();
}
 
ecore::EDataType_ptr CorePackage::getString() const
{
	return m_String;
}
  	
e4c::tag_t CorePackage::getTag_String() const
{
	return e4c::tag< String >::get();
}
 
ecore::EDataType_ptr CorePackage::getInteger() const
{
	return m_Integer;
}
  	
e4c::tag_t CorePackage::getTag_Integer() const
{
	return e4c::tag< Integer >::get();
}
 
ecore::EDataType_ptr CorePackage::getBoolean() const
{
	return m_Boolean;
}
  	
e4c::tag_t CorePackage::getTag_Boolean() const
{
	return e4c::tag< Boolean >::get();
}
 
e4c::tag_t CorePackage::getTag_Element__attribute() const
{
	return e4c::tag< Element__attribute_tag >::get();
}

ecore::EReference_ptr CorePackage::getElement__attribute() const
{
	return m_Element__attribute;
}

e4c::tag_t CorePackage::getTag_Element__annotation() const
{
	return e4c::tag< Element__annotation_tag >::get();
}

ecore::EReference_ptr CorePackage::getElement__annotation() const
{
	return m_Element__annotation;
}

e4c::tag_t CorePackage::getTag_ModelElement__stereotype() const
{
	return e4c::tag< ModelElement__stereotype_tag >::get();
}

ecore::EReference_ptr CorePackage::getModelElement__stereotype() const
{
	return m_ModelElement__stereotype;
}

e4c::tag_t CorePackage::getTag_ModelElement__taggedValue() const
{
	return e4c::tag< ModelElement__taggedValue_tag >::get();
}

ecore::EReference_ptr CorePackage::getModelElement__taggedValue() const
{
	return m_ModelElement__taggedValue;
}

e4c::tag_t CorePackage::getTag_KDMEntity__name() const
{
	return e4c::tag< KDMEntity__name_tag >::get();
}

ecore::EAttribute_ptr CorePackage::getKDMEntity__name() const
{
	return m_KDMEntity__name;
}

e4c::tag_t CorePackage::getTag_AggregatedRelationship__from() const
{
	return e4c::tag< AggregatedRelationship__from_tag >::get();
}

ecore::EReference_ptr CorePackage::getAggregatedRelationship__from() const
{
	return m_AggregatedRelationship__from;
}

e4c::tag_t CorePackage::getTag_AggregatedRelationship__to() const
{
	return e4c::tag< AggregatedRelationship__to_tag >::get();
}

ecore::EReference_ptr CorePackage::getAggregatedRelationship__to() const
{
	return m_AggregatedRelationship__to;
}

e4c::tag_t CorePackage::getTag_AggregatedRelationship__relation() const
{
	return e4c::tag< AggregatedRelationship__relation_tag >::get();
}

ecore::EReference_ptr CorePackage::getAggregatedRelationship__relation() const
{
	return m_AggregatedRelationship__relation;
}

e4c::tag_t CorePackage::getTag_AggregatedRelationship__density() const
{
	return e4c::tag< AggregatedRelationship__density_tag >::get();
}

ecore::EAttribute_ptr CorePackage::getAggregatedRelationship__density() const
{
	return m_AggregatedRelationship__density;
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_core()
{
	return ::kdm::core::CorePackage::_instance();
}
