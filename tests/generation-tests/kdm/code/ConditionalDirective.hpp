
#ifndef EMF_CPP_KDM_CODE_CONDITIONALDIRECTIVE__HPP
#define EMF_CPP_KDM_CODE_CONDITIONALDIRECTIVE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PreprocessorDirective.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class ConditionalDirective :  public virtual ::kdm::code::PreprocessorDirective
{
public:

	typedef ConditionalDirective_ptr ptr_type;
	
	ConditionalDirective();
	virtual ~ConditionalDirective();

	
	

	/*PROTECTED REGION ID(kdm::code::ConditionalDirective public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::ConditionalDirective protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CONDITIONALDIRECTIVE__HPP
