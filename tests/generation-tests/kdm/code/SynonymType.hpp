
#ifndef EMF_CPP_KDM_CODE_SYNONYMTYPE__HPP
#define EMF_CPP_KDM_CODE_SYNONYMTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DefinedType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class SynonymType :  public virtual ::kdm::code::DefinedType
{
public:

	typedef SynonymType_ptr ptr_type;
	
	SynonymType();
	virtual ~SynonymType();

	
	

	/*PROTECTED REGION ID(kdm::code::SynonymType public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::SynonymType protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_SYNONYMTYPE__HPP
