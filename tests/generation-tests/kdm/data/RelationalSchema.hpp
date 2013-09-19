
#ifndef EMF_CPP_KDM_DATA_RELATIONALSCHEMA__HPP
#define EMF_CPP_KDM_DATA_RELATIONALSCHEMA__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/DataContainer.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


// kdm::data::RelationalSchema
class RelationalSchema :  public virtual ::kdm::data::DataContainer
{
public:

	typedef RelationalSchema_ptr ptr_type;
	
	RelationalSchema();
	virtual ~RelationalSchema();

	typedef boost::ptr_set < kdm::code::CodeItem > codeElement_t;

	
	// TODO

	
protected:

	codeElement_t m_codeElement;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_RELATIONALSCHEMA__HPP
