
#include "EStructuralFeature.hpp"
#include <ecore/EClass.hpp>

using namespace ecore;

EStructuralFeature::EStructuralFeature() : 
	m_changeable(),
    m_volatile_(),
    m_transient(),
    m_defaultValueLiteral(),
    m_defaultValue(),
    m_unsettable(),
    m_derived(),
    m_eContainingClass()
{
}

EStructuralFeature::~EStructuralFeature()
{
}

void EStructuralFeature::setChangeable(changeable_t _changeable)
{
	m_changeable = _changeable;;
}

changeable_t EStructuralFeature::getChangeable() const
{
	return m_changeable;
}

void EStructuralFeature::setVolatile_(volatile__t _volatile_)
{
	m_volatile_ = _volatile_;;
}

volatile__t EStructuralFeature::getVolatile_() const
{
	return m_volatile_;
}

void EStructuralFeature::setTransient(transient_t _transient)
{
	m_transient = _transient;;
}

transient_t EStructuralFeature::getTransient() const
{
	return m_transient;
}

void EStructuralFeature::setDefaultValueLiteral(defaultValueLiteral_t _defaultValueLiteral)
{
	m_defaultValueLiteral = _defaultValueLiteral;;
}

defaultValueLiteral_t EStructuralFeature::getDefaultValueLiteral() const
{
	return m_defaultValueLiteral;
}

void EStructuralFeature::setDefaultValue(defaultValue_t _defaultValue)
{
	m_defaultValue = _defaultValue;;
}

defaultValue_t EStructuralFeature::getDefaultValue() const
{
	return m_defaultValue;
}

void EStructuralFeature::setUnsettable(unsettable_t _unsettable)
{
	m_unsettable = _unsettable;;
}

unsettable_t EStructuralFeature::getUnsettable() const
{
	return m_unsettable;
}

void EStructuralFeature::setDerived(derived_t _derived)
{
	m_derived = _derived;;
}

derived_t EStructuralFeature::getDerived() const
{
	return m_derived;
}



