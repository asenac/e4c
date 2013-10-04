
#ifndef EMF_CPP_KDM_CODE_RECORDTYPE__HPP
#define EMF_CPP_KDM_CODE_RECORDTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/CompositeType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class RecordType :  public virtual ::kdm::code::CompositeType
{
public:

	typedef RecordType_ptr ptr_type;
	
	RecordType();
	virtual ~RecordType();

	
	

	/*PROTECTED REGION ID(kdm::code::RecordType public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::RecordType protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_RECORDTYPE__HPP
