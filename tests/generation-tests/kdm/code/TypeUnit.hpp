
#ifndef EMF_CPP_KDM_CODE_TYPEUNIT__HPP
#define EMF_CPP_KDM_CODE_TYPEUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DefinedType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class TypeUnit :  public virtual ::kdm::code::DefinedType
{
public:

	typedef TypeUnit_ptr ptr_type;
	
	TypeUnit();
	virtual ~TypeUnit();

	
	

	/*PROTECTED REGION ID(kdm::code::TypeUnit public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::TypeUnit protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_TYPEUNIT__HPP
