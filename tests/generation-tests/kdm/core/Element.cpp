
#include "Element.hpp"
#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>

using namespace kdm::core;

/*PROTECTED REGION ID(kdm::core::Element include) START*/
/*PROTECTED REGION END*/

Element::Element() : 
	m_attribute(),
    m_annotation()
{
	/*PROTECTED REGION ID(Element constructor) START*/
	/*PROTECTED REGION END*/
}

Element::~Element()
{
	/*PROTECTED REGION ID(Element destructor) START*/
	/*PROTECTED REGION END*/
}

Element::attribute_t Element::getAttribute() const
{
	return e4c::returned(m_attribute);
}


void Element::addAttribute(kdm::kdm::Attribute_ptr attribute_)
{
	m_attribute.insert(std::unique_ptr < kdm::kdm::Attribute >(attribute_));
}

void Element::addAllAttribute(const attribute_t& attribute_)
{
	for (auto i = attribute_.begin(); i != attribute_.end(); i++)
		addAttribute(*i);
}

Element::annotation_t Element::getAnnotation() const
{
	return e4c::returned(m_annotation);
}


void Element::addAnnotation(kdm::kdm::Annotation_ptr annotation_)
{
	m_annotation.insert(std::unique_ptr < kdm::kdm::Annotation >(annotation_));
}

void Element::addAllAnnotation(const annotation_t& annotation_)
{
	for (auto i = annotation_.begin(); i != annotation_.end(); i++)
		addAnnotation(*i);
}



/*PROTECTED REGION ID(kdm::core::Element implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Element::eClassImpl() const
{
	return CorePackage::_instance()->getElement();
}
 
