
#ifndef EMF_CPP_C_CFLOAT__HPP
#define EMF_CPP_C_CFLOAT__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CFloating.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CFloat :  public virtual ::C::CFloating
{
public:

	typedef CFloat_ptr ptr_type;
	
	CFloat();
	virtual ~CFloat();

	
	

	/*PROTECTED REGION ID(C::CFloat public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::CFloat protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CFLOAT__HPP
