
#ifndef EMF_CPP_KDM_SOURCE_INVENTORYELEMENT__HPP
#define EMF_CPP_KDM_SOURCE_INVENTORYELEMENT__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/AbstractInventoryElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace source
{


class InventoryElement :  public virtual ::kdm::source::AbstractInventoryElement
{
public:

	typedef InventoryElement_ptr ptr_type;
	
	InventoryElement();
	virtual ~InventoryElement();

	
	

	/*PROTECTED REGION ID(kdm::source::InventoryElement public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class SourcePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::source::InventoryElement protected) START*/
	/*PROTECTED REGION END*/
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_INVENTORYELEMENT__HPP
