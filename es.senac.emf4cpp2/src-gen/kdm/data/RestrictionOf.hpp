
#ifndef EMF_CPP_KDM_DATA_RESTRICTIONOF__HPP
#define EMF_CPP_KDM_DATA_RESTRICTIONOF__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>


namespace kdm
{
namespace data
{


// kdm::data::RestrictionOf
class RestrictionOf :  public virtual ::kdm::data::AbstractDataRelationship
{
public:

	typedef RestrictionOf_ptr ptr_type;

	RestrictionOf();
	virtual ~RestrictionOf();

	// Typedefs
	typedef ::e4c::impl::reference< RestrictionOf__to_tag > _to_t;
	typedef ::e4c::impl::reference< RestrictionOf__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_RESTRICTIONOF__HPP
