
#include "ValueList.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/ValueElement.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::ValueList include) START*/
/*PROTECTED REGION END*/

ValueList::ValueList() : 
	m_valueElement()
{
	/*PROTECTED REGION ID(ValueList constructor) START*/
	/*PROTECTED REGION END*/
}

ValueList::~ValueList()
{
	/*PROTECTED REGION ID(ValueList destructor) START*/
	/*PROTECTED REGION END*/
}

ValueList::valueElement_t ValueList::getValueElement() const
{
	return e4c::returned(m_valueElement);
}


void ValueList::addValueElement(kdm::code::ValueElement_ptr valueElement_)
{
	m_valueElement.push_back(std::unique_ptr < kdm::code::ValueElement >(valueElement_));
}

void ValueList::addAllValueElement(const valueElement_t& valueElement_)
{
	for (auto i = valueElement_.begin(); i != valueElement_.end(); i++)
		addValueElement(*i);
}



/*PROTECTED REGION ID(kdm::code::ValueList implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ValueList::eClassImpl() const
{
	return CodePackage::_instance()->getValueList();
}
 
