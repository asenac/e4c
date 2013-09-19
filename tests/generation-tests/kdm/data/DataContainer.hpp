
#ifndef EMF_CPP_KDM_DATA_DATACONTAINER__HPP
#define EMF_CPP_KDM_DATA_DATACONTAINER__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/DataResource.hpp>

#include <e4c/mapping.hpp>

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

	typedef boost::ptr_set < kdm::data::DataResource > dataElement_t;

	
	// TODO

	
protected:

	dataElement_t m_dataElement;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_DATACONTAINER__HPP
