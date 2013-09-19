
#ifndef EMF_CPP_KDM_DATA_CONTENTITEM__HPP
#define EMF_CPP_KDM_DATA_CONTENTITEM__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractContentElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


// kdm::data::ContentItem
class ContentItem :  public virtual ::kdm::data::AbstractContentElement
{
public:

	typedef ContentItem_ptr ptr_type;
	
	ContentItem();
	virtual ~ContentItem();

	typedef kdm::data::ComplexContentType_ptr type_t;
	typedef boost::ptr_set < kdm::data::AbstractContentElement > contentElement_t;

	
	// TODO
	// TODO

	
protected:

	type_t m_type;
	contentElement_t m_contentElement;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_CONTENTITEM__HPP
