
#include "Property.hpp"
#include <widgetsmm/WidgetsmmPackage.hpp>

using namespace widgetsmm;

/*PROTECTED REGION ID(widgetsmm::Property include) START*/
/*PROTECTED REGION END*/

Property::Property() : 
	m_name(),
    m_value()
{
	/*PROTECTED REGION ID(Property constructor) START*/
	/*PROTECTED REGION END*/
}

Property::~Property()
{
	/*PROTECTED REGION ID(Property destructor) START*/
	/*PROTECTED REGION END*/
}

void Property::setName(name_t _name)
{
	m_name = _name;;
}

Property::name_t Property::getName() const
{
	return m_name;
}

void Property::setValue(value_t _value)
{
	m_value = _value;;
}

Property::value_t Property::getValue() const
{
	return m_value;
}



/*PROTECTED REGION ID(widgetsmm::Property implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Property::eClassImpl() const
{
	return WidgetsmmPackage::_instance()->getProperty();
}
 
