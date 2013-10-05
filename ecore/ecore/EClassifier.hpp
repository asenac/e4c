#ifndef EMF_CPP_ECORE_ECLASSIFIER__HPP
#define EMF_CPP_ECORE_ECLASSIFIER__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ENamedElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class EClassifier :  public virtual ::ecore::ENamedElement
{
public:

	typedef EClassifier_ptr ptr_type;
	
	virtual ~EClassifier();

	typedef ::ecore::EString instanceClassName_t;
	typedef ::ecore::EJavaClass instanceClass_t;
	typedef ::ecore::EJavaObject defaultValue_t;
	typedef ::ecore::EString instanceTypeName_t;
	typedef ecore::EPackage_ptr ePackage_t;
	typedef std::vector < ecore::ETypeParameter_ptr > eTypeParameters_t;
	
	void setInstanceClassName(instanceClassName_t _instanceClassName);
	instanceClassName_t getInstanceClassName() const;
	void setInstanceClass(instanceClass_t _instanceClass);
	instanceClass_t getInstanceClass() const;
	void setDefaultValue(defaultValue_t _defaultValue);
	defaultValue_t getDefaultValue() const;
	void setInstanceTypeName(instanceTypeName_t _instanceTypeName);
	instanceTypeName_t getInstanceTypeName() const;
	ePackage_t getEPackage() const;
	eTypeParameters_t getETypeParameters() const;
	void addETypeParameters(ecore::ETypeParameter_ptr eTypeParameters_);
	void addAllETypeParameters(const eTypeParameters_t& eTypeParameters_);
	void removeETypeParameters(ecore::ETypeParameter_ptr eTypeParameters_);
	void clearETypeParameters();
	
	ecore::EBoolean isInstance(ecore::EJavaObject object);
	ecore::EInt getClassifierID();

	/*PROTECTED REGION ID(ecore::EClassifier public) START*/
	/*PROTECTED REGION END*/
		
protected:
	EClassifier();

	friend class EcorePackage;

	instanceClassName_t m_instanceClassName;
	instanceClass_t m_instanceClass;
	defaultValue_t m_defaultValue;
	instanceTypeName_t m_instanceTypeName;
	ecore::EPackage_ptr m_ePackage;
	std::vector < std::unique_ptr < ecore::ETypeParameter > > m_eTypeParameters;

	
	friend class ::ecore::EPackage;
	void setEPackage(ePackage_t ePackage_);
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(ecore::EClassifier protected) START*/
	/*PROTECTED REGION END*/
};

} // ecore


#endif // EMF_CPP_ECORE_ECLASSIFIER__HPP
