
#include "Tag.hpp"
#include <emof/EmofPackage.hpp>
#include <emof/Element.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::Tag include) START*/
/*PROTECTED REGION END*/

Tag::Tag() : 
	m_element(),
    m_name(),
    m_value()
{
	/*PROTECTED REGION ID(Tag constructor) START*/
	/*PROTECTED REGION END*/
}

Tag::~Tag()
{
	/*PROTECTED REGION ID(Tag destructor) START*/
	/*PROTECTED REGION END*/
}

Tag::element_t Tag::getElement() const
{
	return e4c::returned(m_element);
}

void Tag::addElement(emof::Element_ptr element_)
{
	if (e4c::contains(m_element, element_))
		return;
	m_element.insert(element_);
	element_->addTag(this);
}

void Tag::addAllElement(const element_t& element_)
{
	for (auto i = element_.begin(); i != element_.end(); i++)
		addElement(*i);
}

void Tag::setName(name_t _name)
{
	m_name = _name;;
}

Tag::name_t Tag::getName() const
{
	return m_name;
}

void Tag::setValue(value_t _value)
{
	m_value = _value;;
}

Tag::value_t Tag::getValue() const
{
	return m_value;
}



/*PROTECTED REGION ID(emof::Tag implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Tag::eClassImpl() const
{
	return EmofPackage::_instance()->getTag();
}
 
