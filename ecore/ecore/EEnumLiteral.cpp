
#include "EEnumLiteral.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EEnum.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::EEnumLiteral include) START*/
/*PROTECTED REGION END*/

EEnumLiteral::EEnumLiteral() : 
	m_value(),
    m_instance(),
    m_literal(),
    m_eEnum()
{
}

EEnumLiteral::~EEnumLiteral()
{
}

void EEnumLiteral::setValue(value_t _value)
{
	m_value = _value;;
}

EEnumLiteral::value_t EEnumLiteral::getValue() const
{
	return m_value;
}

void EEnumLiteral::setInstance(instance_t _instance)
{
	m_instance = _instance;;
}

EEnumLiteral::instance_t EEnumLiteral::getInstance() const
{
	return m_instance;
}

void EEnumLiteral::setLiteral(literal_t _literal)
{
	m_literal = _literal;;
}

EEnumLiteral::literal_t EEnumLiteral::getLiteral() const
{
	return m_literal;
}

EEnumLiteral::eEnum_t EEnumLiteral::getEEnum() const
{
	return e4c::returned(m_eEnum);
}


void EEnumLiteral::setEEnum(eEnum_t eEnum_)
{
	m_eEnum = eEnum_;
}





/*PROTECTED REGION ID(ecore::EEnumLiteral implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EEnumLiteral::eClassImpl() const
{
	return EcorePackage::_instance()->getEEnumLiteral();
}
 
