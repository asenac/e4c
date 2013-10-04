
#ifndef EMF_CPP_KDM_CODE_ITEMUNIT__HPP
#define EMF_CPP_KDM_CODE_ITEMUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DataElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class ItemUnit :  public virtual ::kdm::code::DataElement
{
public:

	typedef ItemUnit_ptr ptr_type;
	
	ItemUnit();
	virtual ~ItemUnit();

	
	

	/*PROTECTED REGION ID(kdm::code::ItemUnit public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::ItemUnit protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_ITEMUNIT__HPP
