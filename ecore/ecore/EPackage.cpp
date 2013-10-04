
#include "EPackage.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EFactory.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EPackage.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::EPackage include) START*/
/*PROTECTED REGION END*/

EPackage::EPackage() : 
	m_nsURI(),
    m_nsPrefix(),
    m_eFactoryInstance(),
    m_eClassifiers(),
    m_eSubpackages(),
    m_eSuperPackage()
{
	/*PROTECTED REGION ID(EPackage constructor) START*/
	/*PROTECTED REGION END*/
}

EPackage::~EPackage()
{
	/*PROTECTED REGION ID(EPackage destructor) START*/
	/*PROTECTED REGION END*/
}

void EPackage::setNsURI(nsURI_t _nsURI)
{
	m_nsURI = _nsURI;;
}

EPackage::nsURI_t EPackage::getNsURI() const
{
	return m_nsURI;
}

void EPackage::setNsPrefix(nsPrefix_t _nsPrefix)
{
	m_nsPrefix = _nsPrefix;;
}

EPackage::nsPrefix_t EPackage::getNsPrefix() const
{
	return m_nsPrefix;
}

EPackage::eFactoryInstance_t EPackage::getEFactoryInstance() const
{
	return e4c::returned(m_eFactoryInstance);
}

void EPackage::setEFactoryInstance(eFactoryInstance_t eFactoryInstance_)
{
	if (m_eFactoryInstance == eFactoryInstance_)
		return;
	if (m_eFactoryInstance)
		m_eFactoryInstance->setEPackage(0);
	m_eFactoryInstance = eFactoryInstance_;
	if (m_eFactoryInstance)
		m_eFactoryInstance->setEPackage(this);
}

EPackage::eClassifiers_t EPackage::getEClassifiers() const
{
	return e4c::returned(m_eClassifiers);
}


void EPackage::addEClassifiers(ecore::EClassifier_ptr eClassifiers_)
{
	eClassifiers_->setEPackage(this);
	m_eClassifiers.push_back(std::unique_ptr < ecore::EClassifier >(eClassifiers_));
}

void EPackage::addAllEClassifiers(const eClassifiers_t& eClassifiers_)
{
	for (auto i = eClassifiers_.begin(); i != eClassifiers_.end(); i++)
		addEClassifiers(*i);
}

EPackage::eSubpackages_t EPackage::getESubpackages() const
{
	return e4c::returned(m_eSubpackages);
}


void EPackage::addESubpackages(ecore::EPackage_ptr eSubpackages_)
{
	eSubpackages_->setESuperPackage(this);
	m_eSubpackages.push_back(std::unique_ptr < ecore::EPackage >(eSubpackages_));
}

void EPackage::addAllESubpackages(const eSubpackages_t& eSubpackages_)
{
	for (auto i = eSubpackages_.begin(); i != eSubpackages_.end(); i++)
		addESubpackages(*i);
}

EPackage::eSuperPackage_t EPackage::getESuperPackage() const
{
	return e4c::returned(m_eSuperPackage);
}

void EPackage::setESuperPackage(eSuperPackage_t eSuperPackage_)
{
	m_eSuperPackage = eSuperPackage_;
}


ecore::EClassifier_ptr EPackage::getEClassifier(ecore::EString name)
{
	/*PROTECTED REGION ID(ecore::EClassifier_ptr EPackage::getEClassifierecore::EString name) START*/
	return ecore::EClassifier_ptr();
	/*PROTECTED REGION END*/
}


/*PROTECTED REGION ID(ecore::EPackage implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EPackage::eClassImpl() const
{
	return EcorePackage::_instance()->getEPackage();
}
 
