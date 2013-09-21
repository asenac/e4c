
#include "EAnnotation.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EStringToStringMapEntry.hpp>
#include <ecore/EModelElement.hpp>
#include <ecore/EObject.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::EAnnotation include) START*/
/*PROTECTED REGION END*/

EAnnotation::EAnnotation() : 
	m_source(),
    m_details(),
    m_eModelElement(),
    m_contents(),
    m_references()
{
}

EAnnotation::~EAnnotation()
{
}

void EAnnotation::setSource(source_t _source)
{
	m_source = _source;;
}

EAnnotation::source_t EAnnotation::getSource() const
{
	return m_source;
}

EAnnotation::details_t EAnnotation::getDetails() const
{
	return e4c::returned(m_details);
}


void EAnnotation::addDetails(ecore::EStringToStringMapEntry_ptr details_)
{
	m_details.push_back(std::unique_ptr < ecore::EStringToStringMapEntry >(details_));
}

void EAnnotation::addAllDetails(const details_t& details_)
{
	for (auto i = details_.begin(); i != details_.end(); i++)
		addDetails(*i);
}


EAnnotation::eModelElement_t EAnnotation::getEModelElement() const
{
	return e4c::returned(m_eModelElement);
}


void EAnnotation::setEModelElement(eModelElement_t eModelElement_)
{
	m_eModelElement = eModelElement_;
}


EAnnotation::contents_t EAnnotation::getContents() const
{
	return e4c::returned(m_contents);
}


void EAnnotation::addContents(ecore::EObject_ptr contents_)
{
	m_contents.push_back(std::unique_ptr < ecore::EObject >(contents_));
}

void EAnnotation::addAllContents(const contents_t& contents_)
{
	for (auto i = contents_.begin(); i != contents_.end(); i++)
		addContents(*i);
}


EAnnotation::references_t EAnnotation::getReferences() const
{
	return e4c::returned(m_references);
}

void EAnnotation::addReferences(ecore::EObject_ptr references_)
{
	m_references.push_back(references_);
	
}

void EAnnotation::addAllReferences(const references_t& references_)
{
	for (auto i = references_.begin(); i != references_.end(); i++)
		addReferences(*i);
}





/*PROTECTED REGION ID(ecore::EAnnotation implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EAnnotation::eClassImpl() const
{
	return EcorePackage::_instance()->getEAnnotation();
}
 
