
#include "EModelElement.hpp"
#include <ecore/EAnnotation.hpp>

using namespace ecore;

EModelElement::EModelElement() : 
	m_eAnnotations()
{
}

EModelElement::~EModelElement()
{
}

EModelElement::eAnnotations_t EModelElement::getEAnnotations() const
{
	return e4c::returned(m_eAnnotations);
}

void EModelElement::addEAnnotations(ecore::EAnnotation_ptr eAnnotations_)
{
	eAnnotations_->setEModelElement(this);
	m_eAnnotations.push_back(std::unique_ptr < ecore::EAnnotation >(eAnnotations_));
}




