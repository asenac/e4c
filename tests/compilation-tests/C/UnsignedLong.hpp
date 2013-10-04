
#ifndef EMF_CPP_C_UNSIGNEDLONG__HPP
#define EMF_CPP_C_UNSIGNEDLONG__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CUnsignedInt.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class UnsignedLong :  public virtual ::C::CUnsignedInt
{
public:

	typedef UnsignedLong_ptr ptr_type;
	
	UnsignedLong();
	virtual ~UnsignedLong();

	
	

	/*PROTECTED REGION ID(C::UnsignedLong public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::UnsignedLong protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_UNSIGNEDLONG__HPP
