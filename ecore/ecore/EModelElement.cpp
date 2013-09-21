
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

void EModelElement::addAllEAnnotations(const eAnnotations_t& eAnnotations_)
{
	for (auto i = eAnnotations_.begin(); i != eAnnotations_.end(); i++)
		addEAnnotations(*i);
}




ecore::EAnnotation_ptr EModelElement::getEAnnotation(ecore::EString source)
{
	/*PROTECTED REGION ID(ecore::EAnnotation_ptr EModelElement::getEAnnotation(ecore::EString source)) START*/
	return ecore::EAnnotation_ptr();
	/*PROTECTED REGION END*/
}

