
#ifndef EMF_CPP_KDM_DATA_DATAMODEL__HPP
#define EMF_CPP_KDM_DATA_DATAMODEL__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>

#include <e4c/mapping.hpp>

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

	typedef std::set < kdm::data::AbstractDataElement_ptr > dataElement_t;

	
	dataElement_t getDataElement() const;


	std::set < std::unique_ptr < kdm::data::AbstractDataElement > > m_dataElement;

		
protected:

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_DATAMODEL__HPP
