
#ifndef EMF_CPP_C_CLONG__HPP
#define EMF_CPP_C_CLONG__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CInt.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CLong :  public virtual ::C::CInt
{
public:

	typedef CLong_ptr ptr_type;
	
	CLong();
	virtual ~CLong();

	
	

	/*PROTECTED REGION ID(C::CLong public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::CLong protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CLONG__HPP
