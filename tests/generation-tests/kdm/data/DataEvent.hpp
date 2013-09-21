
#ifndef EMF_CPP_KDM_DATA_DATAEVENT__HPP
#define EMF_CPP_KDM_DATA_DATAEVENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/DataResource.hpp>

#include <e4c/mapping.hpp>

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

	typedef ::kdm::core::String kind_t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;


	kind_t m_kind;

		
protected:

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_DATAEVENT__HPP
