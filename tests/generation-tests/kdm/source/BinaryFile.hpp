
#ifndef EMF_CPP_KDM_SOURCE_BINARYFILE__HPP
#define EMF_CPP_KDM_SOURCE_BINARYFILE__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/InventoryItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace source
{


class BinaryFile :  public virtual ::kdm::source::InventoryItem
{
public:

	typedef BinaryFile_ptr ptr_type;
	
	BinaryFile();
	virtual ~BinaryFile();

	
	

	/*PROTECTED REGION ID(kdm::source::BinaryFile public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class SourcePackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::source::BinaryFile protected) START*/
	/*PROTECTED REGION END*/
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_BINARYFILE__HPP
