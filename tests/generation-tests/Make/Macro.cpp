
#include "Macro.hpp"
#include <Make/MakePackage.hpp>

using namespace Make;

/*PROTECTED REGION ID(Make::Macro include) START*/
/*PROTECTED REGION END*/

Macro::Macro() : 
	m_value()
{
	/*PROTECTED REGION ID(Macro constructor) START*/
	/*PROTECTED REGION END*/
}

Macro::~Macro()
{
	/*PROTECTED REGION ID(Macro destructor) START*/
	/*PROTECTED REGION END*/
}

void Macro::setValue(value_t _value)
{
	m_value = _value;;
}

Macro::value_t Macro::getValue() const
{
	return m_value;
}



/*PROTECTED REGION ID(Make::Macro implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Macro::eClassImpl() const
{
	return MakePackage::_instance()->getMacro();
}
 
