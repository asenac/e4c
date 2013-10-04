
#ifndef EMF_CPP_KDM_SOURCE_RESOURCEDESCRIPTION__HPP
#define EMF_CPP_KDM_SOURCE_RESOURCEDESCRIPTION__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/InventoryItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace source
{


class ResourceDescription :  public virtual ::kdm::source::InventoryItem
{
public:

	typedef ResourceDescription_ptr ptr_type;
	
	ResourceDescription();
	virtual ~ResourceDescription();

	
	

	/*PROTECTED REGION ID(kdm::source::ResourceDescription public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class SourcePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::source::ResourceDescription protected) START*/
	/*PROTECTED REGION END*/
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_RESOURCEDESCRIPTION__HPP
