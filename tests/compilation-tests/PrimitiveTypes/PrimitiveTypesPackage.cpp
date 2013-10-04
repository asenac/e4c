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
	
	
	
	m_Integer = ecoreFactory->createEDataType();
	m_Integer->setName("Integer");
	addEClassifiers(m_Integer);
	m_String = ecoreFactory->createEDataType();
	m_String->setName("String");
	addEClassifiers(m_String);
	m_Boolean = ecoreFactory->createEDataType();
	m_Boolean->setName("Boolean");
	addEClassifiers(m_Boolean);
	m_Double = ecoreFactory->createEDataType();
	m_Double->setName("Double");
	addEClassifiers(m_Double);

    m_Integer->setSerializable(true);
    m_String->setSerializable(true);
    m_Boolean->setSerializable(true);
    m_Double->setSerializable(true);
	
	
	
	
	
}

const PrimitiveTypesPackage_ptr PrimitiveTypesPackage::_instance()
{
	static PrimitiveTypesPackage __instance;
	return &__instance;
}

ecore::EDataType_ptr PrimitiveTypesPackage::getInteger() const
{
	return m_Integer;
}
  	
e4c::tag_t PrimitiveTypesPackage::getTag_Integer() const
{
	return e4c::tag< Integer >::get();
}
 
ecore::EDataType_ptr PrimitiveTypesPackage::getString() const
{
	return m_String;
}
  	
e4c::tag_t PrimitiveTypesPackage::getTag_String() const
{
	return e4c::tag< String >::get();
}
 
ecore::EDataType_ptr PrimitiveTypesPackage::getBoolean() const
{
	return m_Boolean;
}
  	
e4c::tag_t PrimitiveTypesPackage::getTag_Boolean() const
{
	return e4c::tag< Boolean >::get();
}
 
ecore::EDataType_ptr PrimitiveTypesPackage::getDouble() const
{
	return m_Double;
}
  	
e4c::tag_t PrimitiveTypesPackage::getTag_Double() const
{
	return e4c::tag< Double >::get();
}
 

extern "C" ::ecore::EPackage_ptr e4c_PrimitiveTypes()
{
	return ::PrimitiveTypes::PrimitiveTypesPackage::_instance();
}
