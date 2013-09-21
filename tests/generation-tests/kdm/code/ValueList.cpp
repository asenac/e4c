
#include "ValueList.hpp"
#include <kdm/code/ValueElement.hpp>

using namespace kdm::code;

ValueList::ValueList() : 
	m_valueElement()
{
}

ValueList::~ValueList()
{
}

ValueList::valueElement_t ValueList::getValueElement() const
{
	return e4c::returned(m_valueElement);
}



