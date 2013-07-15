
#ifndef EMF_CPP_KDM_DATA_PRODUCESDATAEVENT__HPP
#define EMF_CPP_KDM_DATA_PRODUCESDATAEVENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace data
{


// kdm::data::ProducesDataEvent
class ProducesDataEvent :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ProducesDataEvent_ptr ptr_type;

	ProducesDataEvent();
	virtual ~ProducesDataEvent();

	// Typedefs
	typedef ::e4c::impl::reference< ProducesDataEvent__to_tag > _to_t;
	typedef ::e4c::impl::reference< ProducesDataEvent__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_PRODUCESDATAEVENT__HPP
