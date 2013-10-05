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
	/*PROTECTED REGION ID(EAnnotation constructor) START*/
	/*PROTECTED REGION END*/
}

EAnnotation::~EAnnotation()
{
	/*PROTECTED REGION ID(EAnnotation destructor) START*/
	/*PROTECTED REGION END*/
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
	assert(details_);
	m_details.push_back(std::unique_ptr < ecore::EStringToStringMapEntry >(details_));
}

void EAnnotation::addAllDetails(const details_t& details_)
{
	for (auto i = details_.begin(); i != details_.end(); i++)
		addDetails(*i);
}

void EAnnotation::removeDetails(ecore::EStringToStringMapEntry_ptr details_)
{
	assert(details_);
	e4c::remove(m_details, details_);
}

void EAnnotation::clearDetails()
{
	m_details.clear();
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
	assert(contents_);
	m_contents.push_back(std::unique_ptr < ecore::EObject >(contents_));
}

void EAnnotation::addAllContents(const contents_t& contents_)
{
	for (auto i = contents_.begin(); i != contents_.end(); i++)
		addContents(*i);
}

void EAnnotation::removeContents(ecore::EObject_ptr contents_)
{
	assert(contents_);
	e4c::remove(m_contents, contents_);
}

void EAnnotation::clearContents()
{
	m_contents.clear();
}

EAnnotation::references_t EAnnotation::getReferences() const
{
	return e4c::returned(m_references);
}
void EAnnotation::addReferences(ecore::EObject_ptr references_)
{
	assert(references_);
	if (e4c::contains(m_references, references_))
		return;
	m_references.push_back(references_);
}

void EAnnotation::addAllReferences(const references_t& references_)
{
	for (auto i = references_.begin(); i != references_.end(); i++)
		addReferences(*i);
}

void EAnnotation::removeReferences(ecore::EObject_ptr references_)
{
	assert(references_);
	e4c::remove(m_references, references_);
}

void EAnnotation::clearReferences()
{
	m_references.clear();
}



/*PROTECTED REGION ID(ecore::EAnnotation implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EAnnotation::eClassImpl() const
{
	return EcorePackage::_instance()->getEAnnotation();
}
 
