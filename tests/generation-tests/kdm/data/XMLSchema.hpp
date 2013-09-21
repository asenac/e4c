
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

	typedef std::set < kdm::data::AbstractContentElement_ptr > contentElement_t;

	
	contentElement_t getContentElement() const;


	std::set < std::unique_ptr < kdm::data::AbstractContentElement > > m_contentElement;

		
protected:

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_XMLSCHEMA__HPP