
#ifndef EMF_CPP_KDM_CODE_DERIVEDTYPE__HPP
#define EMF_CPP_KDM_CODE_DERIVEDTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class DerivedType :  public virtual ::kdm::code::Datatype
{
public:

	typedef DerivedType_ptr ptr_type;
	
	DerivedType();
	virtual ~DerivedType();

	typedef kdm::code::ItemUnit_ptr itemUnit_t;
	
	itemUnit_t getItemUnit() const;
	void setItemUnit(itemUnit_t itemUnit_);
	itemUnit_t releaseItemUnit();
	

	/*PROTECTED REGION ID(kdm::code::DerivedType public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	std::unique_ptr < kdm::code::ItemUnit > m_itemUnit;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::DerivedType protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_DERIVEDTYPE__HPP
