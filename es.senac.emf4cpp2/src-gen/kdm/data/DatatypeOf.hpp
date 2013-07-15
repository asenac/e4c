
#ifndef EMF_CPP_KDM_DATA_DATATYPEOF__HPP
#define EMF_CPP_KDM_DATA_DATATYPEOF__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>


namespace kdm
{
namespace data
{


// kdm::data::DatatypeOf
class DatatypeOf :  public virtual ::kdm::data::AbstractDataRelationship
{
public:

	typedef DatatypeOf_ptr ptr_type;

	DatatypeOf();
	virtual ~DatatypeOf();

	// Typedefs
	typedef ::e4c::impl::reference< DatatypeOf__to_tag > _to_t;
	typedef ::e4c::impl::reference< DatatypeOf__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_DATATYPEOF__HPP
