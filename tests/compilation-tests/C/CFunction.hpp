
#ifndef EMF_CPP_C_CFUNCTION__HPP
#define EMF_CPP_C_CFUNCTION__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/BehavioralFeature.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CFunction :  public virtual ::C::BehavioralFeature
{
public:

	typedef CFunction_ptr ptr_type;
	
	CFunction();
	virtual ~CFunction();

	typedef ::PrimitiveTypes::Boolean isVarArg_t;
	
	void setIsVarArg(isVarArg_t _isVarArg);
	isVarArg_t getIsVarArg() const;
	

	/*PROTECTED REGION ID(C::CFunction public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	isVarArg_t m_isVarArg;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::CFunction protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CFUNCTION__HPP
