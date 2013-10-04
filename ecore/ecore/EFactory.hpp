
#ifndef EMF_CPP_ECORE_EFACTORY__HPP
#define EMF_CPP_ECORE_EFACTORY__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EModelElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class EFactory :  public virtual ::ecore::EModelElement
{
public:

	typedef EFactory_ptr ptr_type;
	
	EFactory();
	virtual ~EFactory();

	typedef ecore::EPackage_ptr ePackage_t;
	
	ePackage_t getEPackage() const;
	void setEPackage(ePackage_t ePackage_);
	
	ecore::EObject_ptr create(ecore::EClass_ptr eClass);
	ecore::EJavaObject createFromString(ecore::EDataType_ptr eDataType, ecore::EString literalValue);
	ecore::EString convertToString(ecore::EDataType_ptr eDataType, ecore::EJavaObject instanceValue);

	/*PROTECTED REGION ID(ecore::EFactory public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EcorePackage;

	ecore::EPackage_ptr m_ePackage;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(ecore::EFactory protected) START*/
	/*PROTECTED REGION END*/
};

} // ecore


#endif // EMF_CPP_ECORE_EFACTORY__HPP
