#ifndef EMF_CPP_ECORE_EDATATYPE__HPP
#define EMF_CPP_ECORE_EDATATYPE__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EClassifier.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class EDataType :  public virtual ::ecore::EClassifier
{
public:

	typedef EDataType_ptr ptr_type;
	
	EDataType();
	virtual ~EDataType();

	typedef ::ecore::EBoolean serializable_t;
	
	void setSerializable(serializable_t _serializable);
	serializable_t getSerializable() const;
	

	/*PROTECTED REGION ID(ecore::EDataType public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EcorePackage;

	serializable_t m_serializable;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(ecore::EDataType protected) START*/
	/*PROTECTED REGION END*/
};

} // ecore


#endif // EMF_CPP_ECORE_EDATATYPE__HPP
