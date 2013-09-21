
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

	typedef std::vector < kdm::data::AbstractContentElement_ptr > contentElement_t;

	
	contentElement_t getContentElement() const;


	std::vector < std::unique_ptr < kdm::data::AbstractContentElement > > m_contentElement;

		
protected:

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_COMPLEXCONTENTTYPE__HPP
