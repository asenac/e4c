
#ifndef EMF_CPP_ECORE_EPARAMETER__HPP
#define EMF_CPP_ECORE_EPARAMETER__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ETypedElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class EParameter :  public virtual ::ecore::ETypedElement
{
public:

	typedef EParameter_ptr ptr_type;
	
	EParameter();
	virtual ~EParameter();

	typedef ecore::EOperation_ptr eOperation_t;
	
	eOperation_t getEOperation() const;
	

	/*PROTECTED REGION ID(ecore::EParameter public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EcorePackage;

	ecore::EOperation_ptr m_eOperation;

	
	friend class ::ecore::EOperation;
	void setEOperation(eOperation_t eOperation_);
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(ecore::EParameter protected) START*/
	/*PROTECTED REGION END*/
};

} // ecore


#endif // EMF_CPP_ECORE_EPARAMETER__HPP
