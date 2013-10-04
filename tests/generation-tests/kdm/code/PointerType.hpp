
#ifndef EMF_CPP_KDM_CODE_POINTERTYPE__HPP
#define EMF_CPP_KDM_CODE_POINTERTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DerivedType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class PointerType :  public virtual ::kdm::code::DerivedType
{
public:

	typedef PointerType_ptr ptr_type;
	
	PointerType();
	virtual ~PointerType();

	
	

	/*PROTECTED REGION ID(kdm::code::PointerType public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::PointerType protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_POINTERTYPE__HPP
