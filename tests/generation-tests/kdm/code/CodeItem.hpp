
#ifndef EMF_CPP_KDM_CODE_CODEITEM__HPP
#define EMF_CPP_KDM_CODE_CODEITEM__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class CodeItem :  public virtual ::kdm::code::AbstractCodeElement
{
public:

	typedef CodeItem_ptr ptr_type;
	
	virtual ~CodeItem();

	
	

	/*PROTECTED REGION ID(kdm::code::CodeItem public) START*/
	/*PROTECTED REGION END*/
		
protected:
	CodeItem();

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::CodeItem protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CODEITEM__HPP
