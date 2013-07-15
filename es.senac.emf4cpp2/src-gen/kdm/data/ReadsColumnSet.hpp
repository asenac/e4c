
#ifndef EMF_CPP_KDM_DATA_READSCOLUMNSET__HPP
#define EMF_CPP_KDM_DATA_READSCOLUMNSET__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace data
{


// kdm::data::ReadsColumnSet
class ReadsColumnSet :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ReadsColumnSet_ptr ptr_type;

	ReadsColumnSet();
	virtual ~ReadsColumnSet();

	// Typedefs
	typedef ::e4c::impl::reference< ReadsColumnSet__to_tag > _to_t;
	typedef ::e4c::impl::reference< ReadsColumnSet__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_READSCOLUMNSET__HPP
