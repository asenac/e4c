
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
	typedef std::set < kdm::data::AbstractContentElement_ptr > contentElement_t;

	
	type_t getType() const;
	contentElement_t getContentElement() const;


	kdm::data::ComplexContentType_ptr m_type;
	std::set < std::unique_ptr < kdm::data::AbstractContentElement > > m_contentElement;

		
protected:

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_CONTENTITEM__HPP
