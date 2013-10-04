
#ifndef EMF_CPP_KDM_DATA_CONTENTELEMENT__HPP
#define EMF_CPP_KDM_DATA_CONTENTELEMENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/ContentItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class ContentElement :  public virtual ::kdm::data::ContentItem
{
public:

	typedef ContentElement_ptr ptr_type;
	
	ContentElement();
	virtual ~ContentElement();

	
	

	/*PROTECTED REGION ID(kdm::data::ContentElement public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class DataPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::data::ContentElement protected) START*/
	/*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_CONTENTELEMENT__HPP
