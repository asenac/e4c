
#ifndef EMF_CPP_KDM_CODE_CHARTYPE__HPP
#define EMF_CPP_KDM_CODE_CHARTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PrimitiveType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class CharType :  public virtual ::kdm::code::PrimitiveType
{
public:

	typedef CharType_ptr ptr_type;
	
	CharType();
	virtual ~CharType();

	
	

	/*PROTECTED REGION ID(kdm::code::CharType public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::CharType protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CHARTYPE__HPP
