
#ifndef EMF_CPP_KDM_DATA_SIMPLECONTENTTYPE__HPP
#define EMF_CPP_KDM_DATA_SIMPLECONTENTTYPE__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/ComplexContentType.hpp>


namespace kdm
{
namespace data
{


// kdm::data::SimpleContentType
class SimpleContentType :  public virtual ::kdm::data::ComplexContentType
{
public:

	typedef SimpleContentType_ptr ptr_type;

	SimpleContentType();
	virtual ~SimpleContentType();

	// Typedefs
	typedef ::e4c::impl::reference< SimpleContentType__type_tag > _type_t;
	typedef ::e4c::impl::attribute< SimpleContentType__kind_tag > _kind_t;

	
	// Members
	_type_t type;
	_kind_t kind;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_SIMPLECONTENTTYPE__HPP
