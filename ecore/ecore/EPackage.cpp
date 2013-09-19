
#include "EPackage.hpp"
#include <ecore/EFactory.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EPackage.hpp>

using namespace ecore;

EPackage::EPackage() : 
	m_nsURI(),
    m_nsPrefix(),
    m_eFactoryInstance(),
    m_eClassifiers(),
    m_eSubpackages(),
    m_eSuperPackage()
{
}

EPackage::~EPackage()
{
}

void EPackage::setNsURI(nsURI_t _nsURI)
{
	m_nsURI = _nsURI;;
}

nsURI_t EPackage::getNsURI() const
{
	return m_nsURI;
}

void EPackage::setNsPrefix(nsPrefix_t _nsPrefix)
{
	m_nsPrefix = _nsPrefix;;
}

nsPrefix_t EPackage::getNsPrefix() const
{
	return m_nsPrefix;
}



