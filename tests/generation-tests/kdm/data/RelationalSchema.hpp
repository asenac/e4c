
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

	typedef std::set < kdm::code::CodeItem_ptr > codeElement_t;

	
	codeElement_t getCodeElement() const;


	std::set < std::unique_ptr < kdm::code::CodeItem > > m_codeElement;

		
protected:

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_RELATIONALSCHEMA__HPP
