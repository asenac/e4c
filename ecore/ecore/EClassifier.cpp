
#include "EClassifier.hpp"
#include <ecore/EPackage.hpp>
#include <ecore/ETypeParameter.hpp>

using namespace ecore;

EClassifier::EClassifier() : 
	m_instanceClassName(),
    m_instanceClass(),
    m_defaultValue(),
    m_instanceTypeName(),
    m_ePackage(),
    m_eTypeParameters()
{
}

EClassifier::~EClassifier()
{
}

void EClassifier::setInstanceClassName(instanceClassName_t _instanceClassName)
{
	m_instanceClassName = _instanceClassName;;
}

instanceClassName_t EClassifier::getInstanceClassName() const
{
	return m_instanceClassName;
}

void EClassifier::setInstanceClass(instanceClass_t _instanceClass)
{
	m_instanceClass = _instanceClass;;
}

instanceClass_t EClassifier::getInstanceClass() const
{
	return m_instanceClass;
}

void EClassifier::setDefaultValue(defaultValue_t _defaultValue)
{
	m_defaultValue = _defaultValue;;
}

defaultValue_t EClassifier::getDefaultValue() const
{
	return m_defaultValue;
}

void EClassifier::setInstanceTypeName(instanceTypeName_t _instanceTypeName)
{
	m_instanceTypeName = _instanceTypeName;;
}

instanceTypeName_t EClassifier::getInstanceTypeName() const
{
	return m_instanceTypeName;
}



