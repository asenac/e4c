
#ifndef EMF_CPP_KDM_CODE_OCTETTYPE__HPP
#define EMF_CPP_KDM_CODE_OCTETTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PrimitiveType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class OctetType :  public virtual ::kdm::code::PrimitiveType
{
public:

	typedef OctetType_ptr ptr_type;
	
	OctetType();
	virtual ~OctetType();

	
	

	/*PROTECTED REGION ID(kdm::code::OctetType public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::OctetType protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_OCTETTYPE__HPP
