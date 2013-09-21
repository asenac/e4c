
#include "ENamedElement.hpp"
#include <ecore/EcorePackage.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::ENamedElement include) START*/
/*PROTECTED REGION END*/

ENamedElement::ENamedElement() : 
	m_name()
{
}

ENamedElement::~ENamedElement()
{
}

void ENamedElement::setName(name_t _name)
{
	m_name = _name;;
}

ENamedElement::name_t ENamedElement::getName() const
{
	return m_name;
}




/*PROTECTED REGION ID(ecore::ENamedElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ENamedElement::eClassImpl() const
{
	return EcorePackage::_instance()->getENamedElement();
}
 
