
#include "Keyword.hpp"
#include <xtext/XtextPackage.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::Keyword include) START*/
/*PROTECTED REGION END*/

Keyword::Keyword() : 
	m_value()
{
	/*PROTECTED REGION ID(Keyword constructor) START*/
	/*PROTECTED REGION END*/
}

Keyword::~Keyword()
{
	/*PROTECTED REGION ID(Keyword destructor) START*/
	/*PROTECTED REGION END*/
}

void Keyword::setValue(value_t _value)
{
	m_value = _value;;
}

Keyword::value_t Keyword::getValue() const
{
	return m_value;
}



/*PROTECTED REGION ID(xtext::Keyword implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Keyword::eClassImpl() const
{
	return XtextPackage::_instance()->getKeyword();
}
 
