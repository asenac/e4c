
#ifndef EMF_CPP_KDM_CODE_VALUE__HPP
#define EMF_CPP_KDM_CODE_VALUE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/ValueElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class Value :  public virtual ::kdm::code::ValueElement
{
public:

	typedef Value_ptr ptr_type;
	
	Value();
	virtual ~Value();

	
	

	/*PROTECTED REGION ID(kdm::code::Value public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::Value protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_VALUE__HPP
