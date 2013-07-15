
#ifndef EMF_CPP_KDM_DATA_RELATIONALSCHEMA__HPP
#define EMF_CPP_KDM_DATA_RELATIONALSCHEMA__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/DataContainer.hpp>


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

	// Typedefs
	typedef ::e4c::impl::reference< RelationalSchema__codeElement_tag > _codeElement_t;

	
	// Members
	_codeElement_t codeElement;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_RELATIONALSCHEMA__HPP
