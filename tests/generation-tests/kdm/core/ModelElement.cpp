
#include "ModelElement.hpp"
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>

using namespace kdm::core;

ModelElement::ModelElement() : 
	m_stereotype(),
    m_taggedValue()
{
}

ModelElement::~ModelElement()
{
}

ModelElement::stereotype_t ModelElement::getStereotype() const
{
	return e4c::returned(m_stereotype);
}

ModelElement::taggedValue_t ModelElement::getTaggedValue() const
{
	return e4c::returned(m_taggedValue);
}



