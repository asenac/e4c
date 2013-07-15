
#ifndef EMF_CPP_KDM_DATA_DATAEVENT__HPP
#define EMF_CPP_KDM_DATA_DATAEVENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/DataResource.hpp>


namespace kdm
{
namespace data
{


// kdm::data::DataEvent
class DataEvent :  public virtual ::kdm::data::DataResource
{
public:

	typedef DataEvent_ptr ptr_type;

	DataEvent();
	virtual ~DataEvent();

	// Typedefs
	typedef ::e4c::impl::attribute< DataEvent__kind_tag > _kind_t;

	
	// Members
	_kind_t kind;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_DATAEVENT__HPP
