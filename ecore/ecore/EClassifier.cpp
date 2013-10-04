
#include "EClassifier.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/ETypeParameter.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::EClassifier include) START*/
/*PROTECTED REGION END*/

EClassifier::EClassifier() : 
	m_instanceClassName(),
    m_instanceClass(),
    m_defaultValue(),
    m_instanceTypeName(),
    m_ePackage(),
    m_eTypeParameters()
{
	/*PROTECTED REGION ID(EClassifier constructor) START*/
	/*PROTECTED REGION END*/
}

EClassifier::~EClassifier()
{
	/*PROTECTED REGION ID(EClassifier destructor) START*/
	/*PROTECTED REGION END*/
}

void EClassifier::setInstanceClassName(instanceClassName_t _instanceClassName)
{
	m_instanceClassName = _instanceClassName;;
}

EClassifier::instanceClassName_t EClassifier::getInstanceClassName() const
{
	return m_instanceClassName;
}

void EClassifier::setInstanceClass(instanceClass_t _instanceClass)
{
	m_instanceClass = _instanceClass;;
}

EClassifier::instanceClass_t EClassifier::getInstanceClass() const
{
	return m_instanceClass;
}

void EClassifier::setDefaultValue(defaultValue_t _defaultValue)
{
	m_defaultValue = _defaultValue;;
}

EClassifier::defaultValue_t EClassifier::getDefaultValue() const
{
	return m_defaultValue;
}

void EClassifier::setInstanceTypeName(instanceTypeName_t _instanceTypeName)
{
	m_instanceTypeName = _instanceTypeName;;
}

EClassifier::instanceTypeName_t EClassifier::getInstanceTypeName() const
{
	return m_instanceTypeName;
}

EClassifier::ePackage_t EClassifier::getEPackage() const
{
	return e4c::returned(m_ePackage);
}

void EClassifier::setEPackage(ePackage_t ePackage_)
{
	m_ePackage = ePackage_;
}

EClassifier::eTypeParameters_t EClassifier::getETypeParameters() const
{
	return e4c::returned(m_eTypeParameters);
}


void EClassifier::addETypeParameters(ecore::ETypeParameter_ptr eTypeParameters_)
{
	m_eTypeParameters.push_back(std::unique_ptr < ecore::ETypeParameter >(eTypeParameters_));
}

void EClassifier::addAllETypeParameters(const eTypeParameters_t& eTypeParameters_)
{
	for (auto i = eTypeParameters_.begin(); i != eTypeParameters_.end(); i++)
		addETypeParameters(*i);
}


ecore::EBoolean EClassifier::isInstance(ecore::EJavaObject object)
{
	/*PROTECTED REGION ID(ecore::EBoolean EClassifier::isInstanceecore::EJavaObject object) START*/
	return ecore::EBoolean();
	/*PROTECTED REGION END*/
}

ecore::EInt EClassifier::getClassifierID()
{
	/*PROTECTED REGION ID(ecore::EInt EClassifier::getClassifierID) START*/
	return ecore::EInt();
	/*PROTECTED REGION END*/
}


/*PROTECTED REGION ID(ecore::EClassifier implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EClassifier::eClassImpl() const
{
	return EcorePackage::_instance()->getEClassifier();
}
 
