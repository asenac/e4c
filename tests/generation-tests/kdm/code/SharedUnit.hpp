
#ifndef EMF_CPP_KDM_CODE_SHAREDUNIT__HPP
#define EMF_CPP_KDM_CODE_SHAREDUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/CompilationUnit.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class SharedUnit :  public virtual ::kdm::code::CompilationUnit
{
public:

	typedef SharedUnit_ptr ptr_type;
	
	SharedUnit();
	virtual ~SharedUnit();

	
	

	/*PROTECTED REGION ID(kdm::code::SharedUnit public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::SharedUnit protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_SHAREDUNIT__HPP
