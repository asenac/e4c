
#ifndef EMF_CPP_KDM_CODE_TEMPLATETYPE__HPP
#define EMF_CPP_KDM_CODE_TEMPLATETYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class TemplateType :  public virtual ::kdm::code::Datatype
{
public:

	typedef TemplateType_ptr ptr_type;
	
	TemplateType();
	virtual ~TemplateType();

	
	

	/*PROTECTED REGION ID(kdm::code::TemplateType public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::TemplateType protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_TEMPLATETYPE__HPP
