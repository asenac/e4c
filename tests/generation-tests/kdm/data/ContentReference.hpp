
#ifndef EMF_CPP_KDM_DATA_CONTENTREFERENCE__HPP
#define EMF_CPP_KDM_DATA_CONTENTREFERENCE__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/ContentItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class ContentReference :  public virtual ::kdm::data::ContentItem
{
public:

	typedef ContentReference_ptr ptr_type;
	
	ContentReference();
	virtual ~ContentReference();

	
	

	/*PROTECTED REGION ID(kdm::data::ContentReference public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class DataPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::data::ContentReference protected) START*/
	/*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_CONTENTREFERENCE__HPP
