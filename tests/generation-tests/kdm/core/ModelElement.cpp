
#include "ModelElement.hpp"
#include <kdm/core/CorePackage.hpp>
#include <kdm/kdm/Stereotype.hpp>
#include <kdm/kdm/ExtendedValue.hpp>

using namespace kdm::core;

/*PROTECTED REGION ID(kdm::core::ModelElement include) START*/
/*PROTECTED REGION END*/

ModelElement::ModelElement() : 
	m_stereotype(),
    m_taggedValue()
{
	/*PROTECTED REGION ID(ModelElement constructor) START*/
	/*PROTECTED REGION END*/
}

ModelElement::~ModelElement()
{
	/*PROTECTED REGION ID(ModelElement destructor) START*/
	/*PROTECTED REGION END*/
}

ModelElement::stereotype_t ModelElement::getStereotype() const
{
	return e4c::returned(m_stereotype);
}

void ModelElement::addStereotype(kdm::kdm::Stereotype_ptr stereotype_)
{
	if (e4c::contains(m_stereotype, stereotype_))
		return;
	m_stereotype.insert(stereotype_);
}

void ModelElement::addAllStereotype(const stereotype_t& stereotype_)
{
	for (auto i = stereotype_.begin(); i != stereotype_.end(); i++)
		addStereotype(*i);
}

ModelElement::taggedValue_t ModelElement::getTaggedValue() const
{
	return e4c::returned(m_taggedValue);
}


void ModelElement::addTaggedValue(kdm::kdm::ExtendedValue_ptr taggedValue_)
{
	m_taggedValue.insert(std::unique_ptr < kdm::kdm::ExtendedValue >(taggedValue_));
}

void ModelElement::addAllTaggedValue(const taggedValue_t& taggedValue_)
{
	for (auto i = taggedValue_.begin(); i != taggedValue_.end(); i++)
		addTaggedValue(*i);
}



/*PROTECTED REGION ID(kdm::core::ModelElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ModelElement::eClassImpl() const
{
	return CorePackage::_instance()->getModelElement();
}
 
