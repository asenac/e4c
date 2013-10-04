
#ifndef EMF_CPP_C_UNSIGNEDLONGLONG__HPP
#define EMF_CPP_C_UNSIGNEDLONGLONG__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CUnsignedInt.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class UnsignedLongLong :  public virtual ::C::CUnsignedInt
{
public:

	typedef UnsignedLongLong_ptr ptr_type;
	
	UnsignedLongLong();
	virtual ~UnsignedLongLong();

	
	

	/*PROTECTED REGION ID(C::UnsignedLongLong public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::UnsignedLongLong protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_UNSIGNEDLONGLONG__HPP
