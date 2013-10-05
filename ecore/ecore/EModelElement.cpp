#include "EModelElement.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EAnnotation.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::EModelElement include) START*/
/*PROTECTED REGION END*/

EModelElement::EModelElement() : 
	m_eAnnotations()
{
	/*PROTECTED REGION ID(EModelElement constructor) START*/
	/*PROTECTED REGION END*/
}

EModelElement::~EModelElement()
{
	/*PROTECTED REGION ID(EModelElement destructor) START*/
	/*PROTECTED REGION END*/
}

EModelElement::eAnnotations_t EModelElement::getEAnnotations() const
{
	return e4c::returned(m_eAnnotations);
}

void EModelElement::addEAnnotations(ecore::EAnnotation_ptr eAnnotations_)
{
	assert(eAnnotations_);
	eAnnotations_->setEModelElement(this);
	m_eAnnotations.push_back(std::unique_ptr < ecore::EAnnotation >(eAnnotations_));
}

void EModelElement::addAllEAnnotations(const eAnnotations_t& eAnnotations_)
{
	for (auto i = eAnnotations_.begin(); i != eAnnotations_.end(); i++)
		addEAnnotations(*i);
}

void EModelElement::removeEAnnotations(ecore::EAnnotation_ptr eAnnotations_)
{
	assert(eAnnotations_);
	e4c::remove(m_eAnnotations, eAnnotations_);
}

void EModelElement::clearEAnnotations()
{
	m_eAnnotations.clear();
}


ecore::EAnnotation_ptr EModelElement::getEAnnotation(ecore::EString source)
{
	/*PROTECTED REGION ID(ecore::EAnnotation_ptr EModelElement::getEAnnotationecore::EString source) START*/
	return ecore::EAnnotation_ptr();
	/*PROTECTED REGION END*/
}


/*PROTECTED REGION ID(ecore::EModelElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EModelElement::eClassImpl() const
{
	return EcorePackage::_instance()->getEModelElement();
}
 
