
#ifndef EMF_CPP_KDM_DATA_DATACONTAINER__HPP
#define EMF_CPP_KDM_DATA_DATACONTAINER__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/DataResource.hpp>


namespace kdm
{
namespace data
{


// kdm::data::DataContainer
class DataContainer :  public virtual ::kdm::data::DataResource
{
public:

	typedef DataContainer_ptr ptr_type;

	DataContainer();
	virtual ~DataContainer();

	// Typedefs
	typedef ::e4c::impl::reference< DataContainer__dataElement_tag > _dataElement_t;

	
	// Members
	_dataElement_t dataElement;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_DATACONTAINER__HPP
