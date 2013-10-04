
#ifndef EMF_CPP_C_CBITFIELD__HPP
#define EMF_CPP_C_CBITFIELD__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CDataType.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CBitField :  public virtual ::C::CDataType
{
public:

	typedef CBitField_ptr ptr_type;
	
	CBitField();
	virtual ~CBitField();

	
	

	/*PROTECTED REGION ID(C::CBitField public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::CBitField protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CBITFIELD__HPP
