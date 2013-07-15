
#ifndef EMF_CPP_KDM_DATA_CONTENTITEM__HPP
#define EMF_CPP_KDM_DATA_CONTENTITEM__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractContentElement.hpp>


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

	// Typedefs
	typedef ::e4c::impl::reference< ContentItem__type_tag > _type_t;
	typedef ::e4c::impl::reference< ContentItem__contentElement_tag > _contentElement_t;

	
	// Members
	_type_t type;
	_contentElement_t contentElement;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_CONTENTITEM__HPP
