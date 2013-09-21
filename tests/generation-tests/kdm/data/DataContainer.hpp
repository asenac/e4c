
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

	typedef std::set < kdm::data::DataResource_ptr > dataElement_t;

	
	dataElement_t getDataElement() const;


	std::set < std::unique_ptr < kdm::data::DataResource > > m_dataElement;

		
protected:

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_DATACONTAINER__HPP
