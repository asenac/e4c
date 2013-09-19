#include "EmofFactory.hpp"
#include "EmofPackage.hpp"
#include "include.hpp"

using namespace emof;

EmofFactory::EmofFactory()
{
	m_ePackage = EmofPackage::_instance();
	// std::bind(&EmofFactory::createClass, this);
	// m_ePackage->getTag_Class();
	// std::bind(&EmofFactory::createComment, this);
	// m_ePackage->getTag_Comment();
	// std::bind(&EmofFactory::createDataType, this);
	// m_ePackage->getTag_DataType();
	// std::bind(&EmofFactory::createEnumeration, this);
	// m_ePackage->getTag_Enumeration();
	// std::bind(&EmofFactory::createEnumerationLiteral, this);
	// m_ePackage->getTag_EnumerationLiteral();
	// std::bind(&EmofFactory::createExtent, this);
	// m_ePackage->getTag_Extent();
	// std::bind(&EmofFactory::createObject, this);
	// m_ePackage->getTag_Object();
	// std::bind(&EmofFactory::createOperation, this);
	// m_ePackage->getTag_Operation();
	// std::bind(&EmofFactory::createPackage, this);
	// m_ePackage->getTag_Package();
	// std::bind(&EmofFactory::createParameter, this);
	// m_ePackage->getTag_Parameter();
	// std::bind(&EmofFactory::createPrimitiveType, this);
	// m_ePackage->getTag_PrimitiveType();
	// std::bind(&EmofFactory::createProperty, this);
	// m_ePackage->getTag_Property();
	// std::bind(&EmofFactory::createTag, this);
	// m_ePackage->getTag_Tag();
	// std::bind(&EmofFactory::createURIExtent, this);
	// m_ePackage->getTag_URIExtent();
}

const EmofFactory_ptr EmofFactory::_instance()
{
	static EmofFactory __instance;
	return &__instance;
}

Class_ptr EmofFactory::createClass() const
{
	return new Class();
}

Comment_ptr EmofFactory::createComment() const
{
	return new Comment();
}

DataType_ptr EmofFactory::createDataType() const
{
	return new DataType();
}

Enumeration_ptr EmofFactory::createEnumeration() const
{
	return new Enumeration();
}

EnumerationLiteral_ptr EmofFactory::createEnumerationLiteral() const
{
	return new EnumerationLiteral();
}

Extent_ptr EmofFactory::createExtent() const
{
	return new Extent();
}

Object_ptr EmofFactory::createObject() const
{
	return new Object();
}

Operation_ptr EmofFactory::createOperation() const
{
	return new Operation();
}

Package_ptr EmofFactory::createPackage() const
{
	return new Package();
}

Parameter_ptr EmofFactory::createParameter() const
{
	return new Parameter();
}

PrimitiveType_ptr EmofFactory::createPrimitiveType() const
{
	return new PrimitiveType();
}

Property_ptr EmofFactory::createProperty() const
{
	return new Property();
}

Tag_ptr EmofFactory::createTag() const
{
	return new Tag();
}

URIExtent_ptr EmofFactory::createURIExtent() const
{
	return new URIExtent();
}

