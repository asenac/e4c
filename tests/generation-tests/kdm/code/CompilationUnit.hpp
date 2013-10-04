
#ifndef EMF_CPP_KDM_CODE_COMPILATIONUNIT__HPP
#define EMF_CPP_KDM_CODE_COMPILATIONUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Module.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class CompilationUnit :  public virtual ::kdm::code::Module
{
public:

	typedef CompilationUnit_ptr ptr_type;
	
	CompilationUnit();
	virtual ~CompilationUnit();

	
	

	/*PROTECTED REGION ID(kdm::code::CompilationUnit public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::CompilationUnit protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_COMPILATIONUNIT__HPP
