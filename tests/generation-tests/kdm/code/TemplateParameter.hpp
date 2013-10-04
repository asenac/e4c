
#ifndef EMF_CPP_KDM_CODE_TEMPLATEPARAMETER__HPP
#define EMF_CPP_KDM_CODE_TEMPLATEPARAMETER__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class TemplateParameter :  public virtual ::kdm::code::Datatype
{
public:

	typedef TemplateParameter_ptr ptr_type;
	
	TemplateParameter();
	virtual ~TemplateParameter();

	
	

	/*PROTECTED REGION ID(kdm::code::TemplateParameter public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::TemplateParameter protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_TEMPLATEPARAMETER__HPP
