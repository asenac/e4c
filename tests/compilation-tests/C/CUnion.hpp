
#ifndef EMF_CPP_C_CUNION__HPP
#define EMF_CPP_C_CUNION__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CStructured.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CUnion :  public virtual ::C::CStructured
{
public:

	typedef CUnion_ptr ptr_type;
	
	CUnion();
	virtual ~CUnion();

	
	

	/*PROTECTED REGION ID(C::CUnion public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::CUnion protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CUNION__HPP
