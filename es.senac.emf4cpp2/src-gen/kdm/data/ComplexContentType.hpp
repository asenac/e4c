
#ifndef EMF_CPP_KDM_DATA_COMPLEXCONTENTTYPE__HPP
#define EMF_CPP_KDM_DATA_COMPLEXCONTENTTYPE__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractContentElement.hpp>


namespace kdm
{
namespace data
{


// kdm::data::ComplexContentType
class ComplexContentType :  public virtual ::kdm::data::AbstractContentElement
{
public:

	typedef ComplexContentType_ptr ptr_type;

	ComplexContentType();
	virtual ~ComplexContentType();

	// Typedefs
	typedef ::e4c::impl::reference< ComplexContentType__contentElement_tag > _contentElement_t;

	
	// Members
	_contentElement_t contentElement;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_COMPLEXCONTENTTYPE__HPP
