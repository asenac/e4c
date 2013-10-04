
#ifndef EMF_CPP_C_CSTRUCTURALFEATURE__HPP
#define EMF_CPP_C_CSTRUCTURALFEATURE__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CStructureContents.hpp>
#include <C/CTypedElement.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CStructuralFeature :  public virtual ::C::CStructureContents,  public virtual ::C::CTypedElement
{
public:

	typedef CStructuralFeature_ptr ptr_type;
	
	CStructuralFeature();
	virtual ~CStructuralFeature();

	
	

	/*PROTECTED REGION ID(C::CStructuralFeature public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::CStructuralFeature protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CSTRUCTURALFEATURE__HPP
