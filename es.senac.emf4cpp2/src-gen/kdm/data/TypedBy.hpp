
#ifndef EMF_CPP_KDM_DATA_TYPEDBY__HPP
#define EMF_CPP_KDM_DATA_TYPEDBY__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>


namespace kdm
{
namespace data
{


// kdm::data::TypedBy
class TypedBy :  public virtual ::kdm::data::AbstractDataRelationship
{
public:

	typedef TypedBy_ptr ptr_type;

	TypedBy();
	virtual ~TypedBy();

	// Typedefs
	typedef ::e4c::impl::reference< TypedBy__to_tag > _to_t;
	typedef ::e4c::impl::reference< TypedBy__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_TYPEDBY__HPP
