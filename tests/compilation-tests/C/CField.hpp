
#ifndef EMF_CPP_C_CFIELD__HPP
#define EMF_CPP_C_CFIELD__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CStructuralFeature.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CField :  public virtual ::C::CStructuralFeature
{
public:

	typedef CField_ptr ptr_type;
	
	CField();
	virtual ~CField();

	
	

	/*PROTECTED REGION ID(C::CField public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::CField protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CFIELD__HPP
