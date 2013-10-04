
#include "Element.hpp"
#include <CST/CSTPackage.hpp>

using namespace CST;

/*PROTECTED REGION ID(CST::Element include) START*/
/*PROTECTED REGION END*/

Element::Element() : 
	m_kind()
{
	/*PROTECTED REGION ID(Element constructor) START*/
	/*PROTECTED REGION END*/
}

Element::~Element()
{
	/*PROTECTED REGION ID(Element destructor) START*/
	/*PROTECTED REGION END*/
}

void Element::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

Element::kind_t Element::getKind() const
{
	return m_kind;
}



/*PROTECTED REGION ID(CST::Element implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Element::eClassImpl() const
{
	return CSTPackage::_instance()->getElement();
}
 
