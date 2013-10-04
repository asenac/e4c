
#ifndef EMF_CPP_KDM_DATA_CONTENTATTRIBUTE__HPP
#define EMF_CPP_KDM_DATA_CONTENTATTRIBUTE__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/ContentItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class ContentAttribute :  public virtual ::kdm::data::ContentItem
{
public:

	typedef ContentAttribute_ptr ptr_type;
	
	ContentAttribute();
	virtual ~ContentAttribute();

	
	

	/*PROTECTED REGION ID(kdm::data::ContentAttribute public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class DataPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::data::ContentAttribute protected) START*/
	/*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_CONTENTATTRIBUTE__HPP
