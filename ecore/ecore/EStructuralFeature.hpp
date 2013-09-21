
#ifndef EMF_CPP_ECORE_ESTRUCTURALFEATURE__HPP
#define EMF_CPP_ECORE_ESTRUCTURALFEATURE__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ETypedElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class EStructuralFeature :  public virtual ::ecore::ETypedElement
{
public:

	typedef EStructuralFeature_ptr ptr_type;
	
	virtual ~EStructuralFeature();

	typedef ::ecore::EBoolean changeable_t;
	typedef ::ecore::EBoolean volatile__t;
	typedef ::ecore::EBoolean transient_t;
	typedef ::ecore::EString defaultValueLiteral_t;
	typedef ::ecore::EJavaObject defaultValue_t;
	typedef ::ecore::EBoolean unsettable_t;
	typedef ::ecore::EBoolean derived_t;
	typedef ecore::EClass_ptr eContainingClass_t;
	
	void setChangeable(changeable_t _changeable);
	changeable_t getChangeable() const;
	void setVolatile_(volatile__t _volatile_);
	volatile__t getVolatile_() const;
	void setTransient(transient_t _transient);
	transient_t getTransient() const;
	void setDefaultValueLiteral(defaultValueLiteral_t _defaultValueLiteral);
	defaultValueLiteral_t getDefaultValueLiteral() const;
	void setDefaultValue(defaultValue_t _defaultValue);
	defaultValue_t getDefaultValue() const;
	void setUnsettable(unsettable_t _unsettable);
	unsettable_t getUnsettable() const;
	void setDerived(derived_t _derived);
	derived_t getDerived() const;
	eContainingClass_t getEContainingClass() const;
	
	ecore::EInt getFeatureID();
	ecore::EJavaClass getContainerClass();
		
protected:
	EStructuralFeature();

	friend class EcorePackage;

	changeable_t m_changeable;
	volatile__t m_volatile_;
	transient_t m_transient;
	defaultValueLiteral_t m_defaultValueLiteral;
	defaultValue_t m_defaultValue;
	unsettable_t m_unsettable;
	derived_t m_derived;
	ecore::EClass_ptr m_eContainingClass;

	
	friend class ::ecore::EClass;
	void setEContainingClass(eContainingClass_t eContainingClass_);
};

} // ecore


#endif // EMF_CPP_ECORE_ESTRUCTURALFEATURE__HPP
