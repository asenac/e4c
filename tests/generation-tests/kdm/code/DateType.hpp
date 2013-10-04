
#ifndef EMF_CPP_KDM_CODE_DATETYPE__HPP
#define EMF_CPP_KDM_CODE_DATETYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PrimitiveType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class DateType :  public virtual ::kdm::code::PrimitiveType
{
public:

	typedef DateType_ptr ptr_type;
	
	DateType();
	virtual ~DateType();

	
	

	/*PROTECTED REGION ID(kdm::code::DateType public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::DateType protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_DATETYPE__HPP
