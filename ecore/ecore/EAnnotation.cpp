
#include "EAnnotation.hpp"
#include <ecore/EStringToStringMapEntry.hpp>
#include <ecore/EModelElement.hpp>
#include <ecore/EObject.hpp>

using namespace ecore;

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


EAnnotation::references_t EAnnotation::getReferences() const
{
	return e4c::returned(m_references);
}





