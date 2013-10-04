
#ifndef EMF_CPP_C_CSTRUCT__HPP
#define EMF_CPP_C_CSTRUCT__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CStructured.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CStruct :  public virtual ::C::CStructured
{
public:

	typedef CStruct_ptr ptr_type;
	
	CStruct();
	virtual ~CStruct();

	
	

	/*PROTECTED REGION ID(C::CStruct public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::CStruct protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CSTRUCT__HPP
