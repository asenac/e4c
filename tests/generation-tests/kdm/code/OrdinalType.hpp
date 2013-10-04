
#ifndef EMF_CPP_KDM_CODE_ORDINALTYPE__HPP
#define EMF_CPP_KDM_CODE_ORDINALTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PrimitiveType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class OrdinalType :  public virtual ::kdm::code::PrimitiveType
{
public:

	typedef OrdinalType_ptr ptr_type;
	
	OrdinalType();
	virtual ~OrdinalType();

	
	

	/*PROTECTED REGION ID(kdm::code::OrdinalType public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::OrdinalType protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_ORDINALTYPE__HPP
