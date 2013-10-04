
#ifndef EMF_CPP_ECORE_EATTRIBUTE__HPP
#define EMF_CPP_ECORE_EATTRIBUTE__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EStructuralFeature.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class EAttribute :  public virtual ::ecore::EStructuralFeature
{
public:

	typedef EAttribute_ptr ptr_type;
	
	EAttribute();
	virtual ~EAttribute();

	typedef ::ecore::EBoolean iD_t;
	typedef ecore::EDataType_ptr eAttributeType_t;
	
	void setID(iD_t _iD);
	iD_t getID() const;
	eAttributeType_t getEAttributeType() const;
	void setEAttributeType(eAttributeType_t eAttributeType_);
	

	/*PROTECTED REGION ID(ecore::EAttribute public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EcorePackage;

	iD_t m_iD;
	ecore::EDataType_ptr m_eAttributeType;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(ecore::EAttribute protected) START*/
	/*PROTECTED REGION END*/
};

} // ecore


#endif // EMF_CPP_ECORE_EATTRIBUTE__HPP
