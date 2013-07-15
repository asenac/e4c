
#ifndef EMF_CPP_KDM_DATA_KEYRELATION__HPP
#define EMF_CPP_KDM_DATA_KEYRELATION__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>


namespace kdm
{
namespace data
{


// kdm::data::KeyRelation
class KeyRelation :  public virtual ::kdm::data::AbstractDataRelationship
{
public:

	typedef KeyRelation_ptr ptr_type;

	KeyRelation();
	virtual ~KeyRelation();

	// Typedefs
	typedef ::e4c::impl::reference< KeyRelation__to_tag > _to_t;
	typedef ::e4c::impl::reference< KeyRelation__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_KEYRELATION__HPP