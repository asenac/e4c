
#ifndef EMF_CPP_KDM_CODE_PACKAGE__HPP
#define EMF_CPP_KDM_CODE_PACKAGE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Module.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class Package :  public virtual ::kdm::code::Module
{
public:

	typedef Package_ptr ptr_type;
	
	Package();
	virtual ~Package();

	
	

	/*PROTECTED REGION ID(kdm::code::Package public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::Package protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_PACKAGE__HPP
