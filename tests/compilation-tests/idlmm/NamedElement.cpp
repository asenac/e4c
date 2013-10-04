
#include "NamedElement.hpp"
#include <idlmm/IdlmmPackage.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::NamedElement include) START*/
/*PROTECTED REGION END*/

NamedElement::NamedElement() : 
	m_identifier()
{
	/*PROTECTED REGION ID(NamedElement constructor) START*/
	/*PROTECTED REGION END*/
}

NamedElement::~NamedElement()
{
	/*PROTECTED REGION ID(NamedElement destructor) START*/
	/*PROTECTED REGION END*/
}

void NamedElement::setIdentifier(identifier_t _identifier)
{
	m_identifier = _identifier;;
}

NamedElement::identifier_t NamedElement::getIdentifier() const
{
	return m_identifier;
}



/*PROTECTED REGION ID(idlmm::NamedElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr NamedElement::eClassImpl() const
{
	return IdlmmPackage::_instance()->getNamedElement();
}
 
