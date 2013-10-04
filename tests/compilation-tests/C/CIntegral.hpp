
#ifndef EMF_CPP_C_CINTEGRAL__HPP
#define EMF_CPP_C_CINTEGRAL__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CDataType.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CIntegral :  public virtual ::C::CDataType
{
public:

	typedef CIntegral_ptr ptr_type;
	
	CIntegral();
	virtual ~CIntegral();

	
	

	/*PROTECTED REGION ID(C::CIntegral public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::CIntegral protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CINTEGRAL__HPP
