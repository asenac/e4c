
#ifndef EMF_CPP_ECORE_ECLASSIFIER__HPP
#define EMF_CPP_ECORE_ECLASSIFIER__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ENamedElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


// ecore::EClassifier
class EClassifier :  public virtual ::ecore::ENamedElement
{
public:

	typedef EClassifier_ptr ptr_type;
	
	virtual ~EClassifier();

	typedef int instanceClassName_t;
	typedef int instanceClass_t;
	typedef int defaultValue_t;
	typedef int instanceTypeName_t;
	typedef ecore::EPackage_ptr ePackage_t;
	typedef boost::ptr_vector < ecore::ETypeParameter > eTypeParameters_t;

	
	void setInstanceClassName(instanceClassName_t _instanceClassName);
	instanceClassName_t getInstanceClassName() const;
	void setInstanceClass(instanceClass_t _instanceClass);
	instanceClass_t getInstanceClass() const;
	void setDefaultValue(defaultValue_t _defaultValue);
	defaultValue_t getDefaultValue() const;
	void setInstanceTypeName(instanceTypeName_t _instanceTypeName);
	instanceTypeName_t getInstanceTypeName() const;
	// TODO
	// TODO

	
protected:
	EClassifier();

	instanceClassName_t m_instanceClassName;
	instanceClass_t m_instanceClass;
	defaultValue_t m_defaultValue;
	instanceTypeName_t m_instanceTypeName;
	ePackage_t m_ePackage;
	eTypeParameters_t m_eTypeParameters;

};

} // ecore


#endif // EMF_CPP_ECORE_ECLASSIFIER__HPP
