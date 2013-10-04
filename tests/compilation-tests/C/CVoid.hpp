
#ifndef EMF_CPP_C_CVOID__HPP
#define EMF_CPP_C_CVOID__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CDataType.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CVoid :  public virtual ::C::CDataType
{
public:

	typedef CVoid_ptr ptr_type;
	
	CVoid();
	virtual ~CVoid();

	
	

	/*PROTECTED REGION ID(C::CVoid public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(C::CVoid protected) START*/
	/*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CVOID__HPP
