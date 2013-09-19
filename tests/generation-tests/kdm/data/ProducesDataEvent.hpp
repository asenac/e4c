
#ifndef EMF_CPP_KDM_DATA_PRODUCESDATAEVENT__HPP
#define EMF_CPP_KDM_DATA_PRODUCESDATAEVENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

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

	typedef kdm::data::DataEvent_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_PRODUCESDATAEVENT__HPP
