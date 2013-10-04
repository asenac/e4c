
#include "Element.hpp"
#include <Make/MakePackage.hpp>

using namespace Make;

/*PROTECTED REGION ID(Make::Element include) START*/
/*PROTECTED REGION END*/

Element::Element() : 
	m_name()
{
	/*PROTECTED REGION ID(Element constructor) START*/
	/*PROTECTED REGION END*/
}

Element::~Element()
{
	/*PROTECTED REGION ID(Element destructor) START*/
	/*PROTECTED REGION END*/
}

void Element::setName(name_t _name)
{
	m_name = _name;;
}

Element::name_t Element::getName() const
{
	return m_name;
}



/*PROTECTED REGION ID(Make::Element implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Element::eClassImpl() const
{
	return MakePackage::_instance()->getElement();
}
 
