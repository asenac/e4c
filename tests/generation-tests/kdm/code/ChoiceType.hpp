
#ifndef EMF_CPP_KDM_CODE_CHOICETYPE__HPP
#define EMF_CPP_KDM_CODE_CHOICETYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/CompositeType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class ChoiceType :  public virtual ::kdm::code::CompositeType
{
public:

	typedef ChoiceType_ptr ptr_type;
	
	ChoiceType();
	virtual ~ChoiceType();

	
	

	/*PROTECTED REGION ID(kdm::code::ChoiceType public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::ChoiceType protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CHOICETYPE__HPP
