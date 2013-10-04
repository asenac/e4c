
#include "InterfaceUnit.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::InterfaceUnit include) START*/
/*PROTECTED REGION END*/

InterfaceUnit::InterfaceUnit() : 
	m_codeElement()
{
	/*PROTECTED REGION ID(InterfaceUnit constructor) START*/
	/*PROTECTED REGION END*/
}

InterfaceUnit::~InterfaceUnit()
{
	/*PROTECTED REGION ID(InterfaceUnit destructor) START*/
	/*PROTECTED REGION END*/
}

InterfaceUnit::codeElement_t InterfaceUnit::getCodeElement() const
{
	return e4c::returned(m_codeElement);
}


void InterfaceUnit::addCodeElement(kdm::code::CodeItem_ptr codeElement_)
{
	m_codeElement.push_back(std::unique_ptr < kdm::code::CodeItem >(codeElement_));
}

void InterfaceUnit::addAllCodeElement(const codeElement_t& codeElement_)
{
	for (auto i = codeElement_.begin(); i != codeElement_.end(); i++)
		addCodeElement(*i);
}



/*PROTECTED REGION ID(kdm::code::InterfaceUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr InterfaceUnit::eClassImpl() const
{
	return CodePackage::_instance()->getInterfaceUnit();
}
 
