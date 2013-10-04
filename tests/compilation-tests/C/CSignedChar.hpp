
#ifndef EMF_CPP_C_CSIGNEDCHAR__HPP
#define EMF_CPP_C_CSIGNEDCHAR__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CChar.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CSignedChar :  public virtual ::C::CChar
{
public:

	typedef CSignedChar_ptr ptr_type;
	
	CSignedChar();
	virtual ~CSignedChar();

	
	

	/*PROTECTED REGION ID(C::CSignedChar public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::CSignedChar protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CSIGNEDCHAR__HPP
