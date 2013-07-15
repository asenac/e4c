
#ifndef EMF_CPP_KDM_DATA_DATARELATIONSHIP__HPP
#define EMF_CPP_KDM_DATA_DATARELATIONSHIP__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>


namespace kdm
{
namespace data
{


// kdm::data::DataRelationship
class DataRelationship :  public virtual ::kdm::data::AbstractDataRelationship
{
public:

	typedef DataRelationship_ptr ptr_type;

	DataRelationship();
	virtual ~DataRelationship();

	// Typedefs
	typedef ::e4c::impl::reference< DataRelationship__to_tag > _to_t;
	typedef ::e4c::impl::reference< DataRelationship__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_DATARELATIONSHIP__HPP
