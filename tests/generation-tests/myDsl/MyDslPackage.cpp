#include "MyDslPackage.hpp"
#include "MyDslFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace myDsl;

MyDslPackage::MyDslPackage()
{
	m_eFactoryInstance = MyDslFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	
	
	m_Model = ecoreFactory->createEClass();
	m_Model->setName("Model");
	addEClassifiers(m_Model);
	m_Import = ecoreFactory->createEClass();
	m_Import->setName("Import");
	addEClassifiers(m_Import);
	m_Type = ecoreFactory->createEClass();
	m_Type->setName("Type");
	addEClassifiers(m_Type);
	m_SimpleType = ecoreFactory->createEClass();
	m_SimpleType->setName("SimpleType");
	addEClassifiers(m_SimpleType);
	m_Entity = ecoreFactory->createEClass();
	m_Entity->setName("Entity");
	addEClassifiers(m_Entity);
	m_Property = ecoreFactory->createEClass();
	m_Property->setName("Property");
	addEClassifiers(m_Property);

	
    {
        m_Model__imports = ecoreFactory->createEReference();
        m_Model__imports->setName("imports");
        m_Model->addEStructuralFeatures(m_Model__imports);
        m_Model->addEAllStructuralFeatures(m_Model__imports);
        m_Model->addEReferences(m_Model__imports);
        m_Model->addEAllReferences(m_Model__imports);
    }
    {
        m_Model__elements = ecoreFactory->createEReference();
        m_Model__elements->setName("elements");
        m_Model->addEStructuralFeatures(m_Model__elements);
        m_Model->addEAllStructuralFeatures(m_Model__elements);
        m_Model->addEReferences(m_Model__elements);
        m_Model->addEAllReferences(m_Model__elements);
    }
    {
        m_Import__importURI = ecoreFactory->createEAttribute();
        m_Import__importURI->setName("importURI");
        m_Import->addEStructuralFeatures(m_Import__importURI);
        m_Import->addEAllStructuralFeatures(m_Import__importURI);
        m_Import->addEAttributes(m_Import__importURI);
        m_Import->addEAllAttributes(m_Import__importURI);
    }
    {
        m_Type__name = ecoreFactory->createEAttribute();
        m_Type__name->setName("name");
        m_Type->addEStructuralFeatures(m_Type__name);
        m_Type->addEAllStructuralFeatures(m_Type__name);
        m_Type->addEAttributes(m_Type__name);
        m_Type->addEAllAttributes(m_Type__name);
    }
    {
        m_Entity__extends = ecoreFactory->createEReference();
        m_Entity__extends->setName("extends");
        m_Entity->addEStructuralFeatures(m_Entity__extends);
        m_Entity->addEAllStructuralFeatures(m_Entity__extends);
        m_Entity->addEReferences(m_Entity__extends);
        m_Entity->addEAllReferences(m_Entity__extends);
    }
    {
        m_Entity__properties = ecoreFactory->createEReference();
        m_Entity__properties->setName("properties");
        m_Entity->addEStructuralFeatures(m_Entity__properties);
        m_Entity->addEAllStructuralFeatures(m_Entity__properties);
        m_Entity->addEReferences(m_Entity__properties);
        m_Entity->addEAllReferences(m_Entity__properties);
    }
    {
        m_Property__name = ecoreFactory->createEAttribute();
        m_Property__name->setName("name");
        m_Property->addEStructuralFeatures(m_Property__name);
        m_Property->addEAllStructuralFeatures(m_Property__name);
        m_Property->addEAttributes(m_Property__name);
        m_Property->addEAllAttributes(m_Property__name);
    }
    {
        m_Property__type = ecoreFactory->createEReference();
        m_Property__type->setName("type");
        m_Property->addEStructuralFeatures(m_Property__type);
        m_Property->addEAllStructuralFeatures(m_Property__type);
        m_Property->addEReferences(m_Property__type);
        m_Property->addEAllReferences(m_Property__type);
    }
    {
        m_Property__many = ecoreFactory->createEAttribute();
        m_Property__many->setName("many");
        m_Property->addEStructuralFeatures(m_Property__many);
        m_Property->addEAllStructuralFeatures(m_Property__many);
        m_Property->addEAttributes(m_Property__many);
        m_Property->addEAllAttributes(m_Property__many);
    }
	
	m_SimpleType->addESuperTypes(m_Type);
	m_SimpleType->addAllEAllOperations(m_Type->getEOperations());
	m_SimpleType->addAllEAllReferences(m_Type->getEReferences());
	m_SimpleType->addAllEAllAttributes(m_Type->getEAttributes());
	m_SimpleType->addAllEAllStructuralFeatures(m_Type->getEStructuralFeatures());
	m_Entity->addESuperTypes(m_Type);
	m_Entity->addAllEAllOperations(m_Type->getEOperations());
	m_Entity->addAllEAllReferences(m_Type->getEReferences());
	m_Entity->addAllEAllAttributes(m_Type->getEAttributes());
	m_Entity->addAllEAllStructuralFeatures(m_Type->getEStructuralFeatures());
	
	
	m_Model->addFeatureAccesors(m_Model__imports, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< myDsl::Model_ptr >(o)->getImports()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Model->addFeatureAccesors(m_Model__elements, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< myDsl::Model_ptr >(o)->getElements()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Import->addFeatureAccesors(m_Import__importURI, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< myDsl::Import_ptr >(o)->getImportURI()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Type->addFeatureAccesors(m_Type__name, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< myDsl::Type_ptr >(o)->getName()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Entity->addFeatureAccesors(m_Entity__extends, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< myDsl::Entity_ptr >(o)->getExtends()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Entity->addFeatureAccesors(m_Entity__properties, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< myDsl::Entity_ptr >(o)->getProperties()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Property->addFeatureAccesors(m_Property__name, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< myDsl::Property_ptr >(o)->getName()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Property->addFeatureAccesors(m_Property__type, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< myDsl::Property_ptr >(o)->getType()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Property->addFeatureAccesors(m_Property__many, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< myDsl::Property_ptr >(o)->getMany()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	
}

const MyDslPackage_ptr MyDslPackage::_instance()
{
	static MyDslPackage __instance;
	return &__instance;
}

ecore::EClass_ptr MyDslPackage::getModel() const
{
	return m_Model;
}
  	
e4c::tag_t MyDslPackage::getTag_Model() const
{
	return e4c::tag< Model >::get();
}
 
ecore::EClass_ptr MyDslPackage::getImport() const
{
	return m_Import;
}
  	
e4c::tag_t MyDslPackage::getTag_Import() const
{
	return e4c::tag< Import >::get();
}
 
ecore::EClass_ptr MyDslPackage::getType() const
{
	return m_Type;
}
  	
e4c::tag_t MyDslPackage::getTag_Type() const
{
	return e4c::tag< Type >::get();
}
 
ecore::EClass_ptr MyDslPackage::getSimpleType() const
{
	return m_SimpleType;
}
  	
e4c::tag_t MyDslPackage::getTag_SimpleType() const
{
	return e4c::tag< SimpleType >::get();
}
 
ecore::EClass_ptr MyDslPackage::getEntity() const
{
	return m_Entity;
}
  	
e4c::tag_t MyDslPackage::getTag_Entity() const
{
	return e4c::tag< Entity >::get();
}
 
ecore::EClass_ptr MyDslPackage::getProperty() const
{
	return m_Property;
}
  	
e4c::tag_t MyDslPackage::getTag_Property() const
{
	return e4c::tag< Property >::get();
}
 
e4c::tag_t MyDslPackage::getTag_Model__imports() const
{
	return e4c::tag< Model__imports_tag >::get();
}

ecore::EReference_ptr MyDslPackage::getModel__imports() const
{
	return m_Model__imports;
}

e4c::tag_t MyDslPackage::getTag_Model__elements() const
{
	return e4c::tag< Model__elements_tag >::get();
}

ecore::EReference_ptr MyDslPackage::getModel__elements() const
{
	return m_Model__elements;
}

e4c::tag_t MyDslPackage::getTag_Import__importURI() const
{
	return e4c::tag< Import__importURI_tag >::get();
}

ecore::EAttribute_ptr MyDslPackage::getImport__importURI() const
{
	return m_Import__importURI;
}

e4c::tag_t MyDslPackage::getTag_Type__name() const
{
	return e4c::tag< Type__name_tag >::get();
}

ecore::EAttribute_ptr MyDslPackage::getType__name() const
{
	return m_Type__name;
}

e4c::tag_t MyDslPackage::getTag_Entity__extends() const
{
	return e4c::tag< Entity__extends_tag >::get();
}

ecore::EReference_ptr MyDslPackage::getEntity__extends() const
{
	return m_Entity__extends;
}

e4c::tag_t MyDslPackage::getTag_Entity__properties() const
{
	return e4c::tag< Entity__properties_tag >::get();
}

ecore::EReference_ptr MyDslPackage::getEntity__properties() const
{
	return m_Entity__properties;
}

e4c::tag_t MyDslPackage::getTag_Property__name() const
{
	return e4c::tag< Property__name_tag >::get();
}

ecore::EAttribute_ptr MyDslPackage::getProperty__name() const
{
	return m_Property__name;
}

e4c::tag_t MyDslPackage::getTag_Property__type() const
{
	return e4c::tag< Property__type_tag >::get();
}

ecore::EReference_ptr MyDslPackage::getProperty__type() const
{
	return m_Property__type;
}

e4c::tag_t MyDslPackage::getTag_Property__many() const
{
	return e4c::tag< Property__many_tag >::get();
}

ecore::EAttribute_ptr MyDslPackage::getProperty__many() const
{
	return m_Property__many;
}


extern "C" ::ecore::EPackage_ptr e4c_myDsl()
{
	return ::myDsl::MyDslPackage::_instance();
}
