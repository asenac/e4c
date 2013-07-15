
#ifndef EMF_CPP_KDM_DATA_WRITESCOLUMNSET__HPP
#define EMF_CPP_KDM_DATA_WRITESCOLUMNSET__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace data
{


// kdm::data::WritesColumnSet
class WritesColumnSet :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef WritesColumnSet_ptr ptr_type;

	WritesColumnSet();
	virtual ~WritesColumnSet();

	// Typedefs
	typedef ::e4c::impl::reference< WritesColumnSet__to_tag > _to_t;
	typedef ::e4c::impl::reference< WritesColumnSet__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_WRITESCOLUMNSET__HPP
