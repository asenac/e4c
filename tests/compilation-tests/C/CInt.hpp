
#ifndef EMF_CPP_C_CINT__HPP
#define EMF_CPP_C_CINT__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CIntegral.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CInt :  public virtual ::C::CIntegral
{
public:

	typedef CInt_ptr ptr_type;
	
	CInt();
	virtual ~CInt();

	
	

	/*PROTECTED REGION ID(C::CInt public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::CInt protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CINT__HPP
