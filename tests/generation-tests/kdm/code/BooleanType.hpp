
#ifndef EMF_CPP_KDM_CODE_BOOLEANTYPE__HPP
#define EMF_CPP_KDM_CODE_BOOLEANTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PrimitiveType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class BooleanType :  public virtual ::kdm::code::PrimitiveType
{
public:

	typedef BooleanType_ptr ptr_type;
	
	BooleanType();
	virtual ~BooleanType();

	
	

	/*PROTECTED REGION ID(kdm::code::BooleanType public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::BooleanType protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_BOOLEANTYPE__HPP
