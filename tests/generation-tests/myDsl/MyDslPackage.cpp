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
	
	::ecore::EClass_ptr Model_ = ecoreFactory->createEClass();
	Model_->setName("Model");
	// m_eClassifiers.push_back(Model_);
	::ecore::EClass_ptr Import_ = ecoreFactory->createEClass();
	Import_->setName("Import");
	// m_eClassifiers.push_back(Import_);
	::ecore::EClass_ptr Type_ = ecoreFactory->createEClass();
	Type_->setName("Type");
	// m_eClassifiers.push_back(Type_);
	::ecore::EClass_ptr SimpleType_ = ecoreFactory->createEClass();
	SimpleType_->setName("SimpleType");
	// m_eClassifiers.push_back(SimpleType_);
	::ecore::EClass_ptr Entity_ = ecoreFactory->createEClass();
	Entity_->setName("Entity");
	// m_eClassifiers.push_back(Entity_);
	::ecore::EClass_ptr Property_ = ecoreFactory->createEClass();
	Property_->setName("Property");
	// m_eClassifiers.push_back(Property_);
	
	
	// SimpleType_->addESuperType(Type_);
	// Entity_->addESuperType(Type_);
	
	
	
	
}

const MyDslPackage_ptr MyDslPackage::_instance()
{
	static MyDslPackage __instance;
	return &__instance;
}

e4c::tag_t MyDslPackage::getTag_Model() const
{
	return e4c::tag< Model >::get();
}
 
e4c::tag_t MyDslPackage::getTag_Import() const
{
	return e4c::tag< Import >::get();
}
 
e4c::tag_t MyDslPackage::getTag_Type() const
{
	return e4c::tag< Type >::get();
}
 
e4c::tag_t MyDslPackage::getTag_SimpleType() const
{
	return e4c::tag< SimpleType >::get();
}
 
e4c::tag_t MyDslPackage::getTag_Entity() const
{
	return e4c::tag< Entity >::get();
}
 
e4c::tag_t MyDslPackage::getTag_Property() const
{
	return e4c::tag< Property >::get();
}
 
e4c::tag_t MyDslPackage::getTag_Model__imports() const
{
	return e4c::tag< Model__imports_tag >::get();
}

e4c::tag_t MyDslPackage::getTag_Model__elements() const
{
	return e4c::tag< Model__elements_tag >::get();
}

e4c::tag_t MyDslPackage::getTag_Import__importURI() const
{
	return e4c::tag< Import__importURI_tag >::get();
}

e4c::tag_t MyDslPackage::getTag_Type__name() const
{
	return e4c::tag< Type__name_tag >::get();
}

e4c::tag_t MyDslPackage::getTag_Entity__extends() const
{
	return e4c::tag< Entity__extends_tag >::get();
}

e4c::tag_t MyDslPackage::getTag_Entity__properties() const
{
	return e4c::tag< Entity__properties_tag >::get();
}

e4c::tag_t MyDslPackage::getTag_Property__name() const
{
	return e4c::tag< Property__name_tag >::get();
}

e4c::tag_t MyDslPackage::getTag_Property__type() const
{
	return e4c::tag< Property__type_tag >::get();
}

e4c::tag_t MyDslPackage::getTag_Property__many() const
{
	return e4c::tag< Property__many_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_myDsl()
{
	return ::myDsl::MyDslPackage::_instance();
}
