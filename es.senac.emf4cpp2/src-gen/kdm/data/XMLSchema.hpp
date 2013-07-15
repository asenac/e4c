
#ifndef EMF_CPP_KDM_DATA_XMLSCHEMA__HPP
#define EMF_CPP_KDM_DATA_XMLSCHEMA__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataElement.hpp>


namespace kdm
{
namespace data
{


// kdm::data::XMLSchema
class XMLSchema :  public virtual ::kdm::data::AbstractDataElement
{
public:

	typedef XMLSchema_ptr ptr_type;

	XMLSchema();
	virtual ~XMLSchema();

	// Typedefs
	typedef ::e4c::impl::reference< XMLSchema__contentElement_tag > _contentElement_t;

	
	// Members
	_contentElement_t contentElement;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_XMLSCHEMA__HPP
