
#ifndef EMF_CPP_KDM_DATA_DATAMODEL__HPP
#define EMF_CPP_KDM_DATA_DATAMODEL__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>


namespace kdm
{
namespace data
{


// kdm::data::DataModel
class DataModel :  public virtual ::kdm::kdm::KDMModel
{
public:

	typedef DataModel_ptr ptr_type;

	DataModel();
	virtual ~DataModel();

	// Typedefs
	typedef ::e4c::impl::reference< DataModel__dataElement_tag > _dataElement_t;

	
	// Members
	_dataElement_t dataElement;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_DATAMODEL__HPP
