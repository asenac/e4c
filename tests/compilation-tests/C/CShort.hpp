
#ifndef EMF_CPP_C_CSHORT__HPP
#define EMF_CPP_C_CSHORT__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CInt.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CShort :  public virtual ::C::CInt
{
public:

	typedef CShort_ptr ptr_type;
	
	CShort();
	virtual ~CShort();

	
	

	/*PROTECTED REGION ID(C::CShort public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::CShort protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CSHORT__HPP
