
#include "EStructuralFeature.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::EStructuralFeature include) START*/
/*PROTECTED REGION END*/

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

EStructuralFeature::changeable_t EStructuralFeature::getChangeable() const
{
	return m_changeable;
}

void EStructuralFeature::setVolatile_(volatile__t _volatile_)
{
	m_volatile_ = _volatile_;;
}

EStructuralFeature::volatile__t EStructuralFeature::getVolatile_() const
{
	return m_volatile_;
}

void EStructuralFeature::setTransient(transient_t _transient)
{
	m_transient = _transient;;
}

EStructuralFeature::transient_t EStructuralFeature::getTransient() const
{
	return m_transient;
}

void EStructuralFeature::setDefaultValueLiteral(defaultValueLiteral_t _defaultValueLiteral)
{
	m_defaultValueLiteral = _defaultValueLiteral;;
}

EStructuralFeature::defaultValueLiteral_t EStructuralFeature::getDefaultValueLiteral() const
{
	return m_defaultValueLiteral;
}

void EStructuralFeature::setDefaultValue(defaultValue_t _defaultValue)
{
	m_defaultValue = _defaultValue;;
}

EStructuralFeature::defaultValue_t EStructuralFeature::getDefaultValue() const
{
	return m_defaultValue;
}

void EStructuralFeature::setUnsettable(unsettable_t _unsettable)
{
	m_unsettable = _unsettable;;
}

EStructuralFeature::unsettable_t EStructuralFeature::getUnsettable() const
{
	return m_unsettable;
}

void EStructuralFeature::setDerived(derived_t _derived)
{
	m_derived = _derived;;
}

EStructuralFeature::derived_t EStructuralFeature::getDerived() const
{
	return m_derived;
}

EStructuralFeature::eContainingClass_t EStructuralFeature::getEContainingClass() const
{
	return e4c::returned(m_eContainingClass);
}


void EStructuralFeature::setEContainingClass(eContainingClass_t eContainingClass_)
{
	m_eContainingClass = eContainingClass_;
}




ecore::EInt EStructuralFeature::getFeatureID()
{
	/*PROTECTED REGION ID(ecore::EInt EStructuralFeature::getFeatureID) START*/
	return ecore::EInt();
	/*PROTECTED REGION END*/
}

ecore::EJavaClass EStructuralFeature::getContainerClass()
{
	/*PROTECTED REGION ID(ecore::EJavaClass EStructuralFeature::getContainerClass) START*/
	return ecore::EJavaClass();
	/*PROTECTED REGION END*/
}


/*PROTECTED REGION ID(ecore::EStructuralFeature implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EStructuralFeature::eClassImpl() const
{
	return EcorePackage::_instance()->getEStructuralFeature();
}
 
