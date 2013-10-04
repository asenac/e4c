
#ifndef EMF_CPP_KDM_CODE_VOIDTYPE__HPP
#define EMF_CPP_KDM_CODE_VOIDTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PrimitiveType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class VoidType :  public virtual ::kdm::code::PrimitiveType
{
public:

	typedef VoidType_ptr ptr_type;
	
	VoidType();
	virtual ~VoidType();

	
	

	/*PROTECTED REGION ID(kdm::code::VoidType public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::VoidType protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_VOIDTYPE__HPP
