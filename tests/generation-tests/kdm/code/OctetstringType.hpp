
#ifndef EMF_CPP_KDM_CODE_OCTETSTRINGTYPE__HPP
#define EMF_CPP_KDM_CODE_OCTETSTRINGTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PrimitiveType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class OctetstringType :  public virtual ::kdm::code::PrimitiveType
{
public:

	typedef OctetstringType_ptr ptr_type;
	
	OctetstringType();
	virtual ~OctetstringType();

	
	

	/*PROTECTED REGION ID(kdm::code::OctetstringType public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::OctetstringType protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_OCTETSTRINGTYPE__HPP
