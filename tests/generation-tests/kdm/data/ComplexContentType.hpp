
#ifndef EMF_CPP_KDM_DATA_COMPLEXCONTENTTYPE__HPP
#define EMF_CPP_KDM_DATA_COMPLEXCONTENTTYPE__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractContentElement.hpp>

#include <e4c/mapping.hpp>

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

	typedef boost::ptr_vector < kdm::data::AbstractContentElement > contentElement_t;

	
	// TODO

	
protected:

	contentElement_t m_contentElement;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_COMPLEXCONTENTTYPE__HPP
