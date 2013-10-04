
#ifndef EMF_CPP_C_CUNSIGNEDINT__HPP
#define EMF_CPP_C_CUNSIGNEDINT__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CInt.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CUnsignedInt :  public virtual ::C::CInt
{
public:

	typedef CUnsignedInt_ptr ptr_type;
	
	CUnsignedInt();
	virtual ~CUnsignedInt();

	
	

	/*PROTECTED REGION ID(C::CUnsignedInt public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::CUnsignedInt protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CUNSIGNEDINT__HPP
