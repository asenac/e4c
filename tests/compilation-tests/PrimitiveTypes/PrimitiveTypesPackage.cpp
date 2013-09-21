#include "PrimitiveTypesPackage.hpp"
#include "PrimitiveTypesFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace PrimitiveTypes;

PrimitiveTypesPackage::PrimitiveTypesPackage()
{
	m_eFactoryInstance = PrimitiveTypesFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	
	
	
	
	::ecore::EDataType_ptr Integer_ = ecoreFactory->createEDataType();
	Integer_->setName("Integer");
	// m_eClassifiers.push_back(Integer_);
	::ecore::EDataType_ptr String_ = ecoreFactory->createEDataType();
	String_->setName("String");
	// m_eClassifiers.push_back(String_);
	::ecore::EDataType_ptr Boolean_ = ecoreFactory->createEDataType();
	Boolean_->setName("Boolean");
	// m_eClassifiers.push_back(Boolean_);
	::ecore::EDataType_ptr Double_ = ecoreFactory->createEDataType();
	Double_->setName("Double");
	// m_eClassifiers.push_back(Double_);
	
	
}

const PrimitiveTypesPackage_ptr PrimitiveTypesPackage::_instance()
{
	static PrimitiveTypesPackage __instance;
	return &__instance;
}

e4c::tag_t PrimitiveTypesPackage::getTag_Integer() const
{
	return e4c::tag< Integer >::get();
}
 
e4c::tag_t PrimitiveTypesPackage::getTag_String() const
{
	return e4c::tag< String >::get();
}
 
e4c::tag_t PrimitiveTypesPackage::getTag_Boolean() const
{
	return e4c::tag< Boolean >::get();
}
 
e4c::tag_t PrimitiveTypesPackage::getTag_Double() const
{
	return e4c::tag< Double >::get();
}
 

extern "C" ::ecore::EPackage_ptr e4c_PrimitiveTypes()
{
	return ::PrimitiveTypes::PrimitiveTypesPackage::_instance();
}
