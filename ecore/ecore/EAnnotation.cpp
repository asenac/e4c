
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

source_t EAnnotation::getSource() const
{
	return m_source;
}



