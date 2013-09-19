
#ifndef EMF_CPP_KDM_DATA_XMLSCHEMA__HPP
#define EMF_CPP_KDM_DATA_XMLSCHEMA__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataElement.hpp>

#include <e4c/mapping.hpp>

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

	typedef boost::ptr_set < kdm::data::AbstractContentElement > contentElement_t;

	
	// TODO

	
protected:

	contentElement_t m_contentElement;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_XMLSCHEMA__HPP
