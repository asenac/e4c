
#ifndef EMF_CPP_KDM_CODE_INDEXUNIT__HPP
#define EMF_CPP_KDM_CODE_INDEXUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DataElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class IndexUnit :  public virtual ::kdm::code::DataElement
{
public:

	typedef IndexUnit_ptr ptr_type;
	
	IndexUnit();
	virtual ~IndexUnit();

	
	

	/*PROTECTED REGION ID(kdm::code::IndexUnit public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::IndexUnit protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_INDEXUNIT__HPP
