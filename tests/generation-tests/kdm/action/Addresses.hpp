
#ifndef EMF_CPP_KDM_ACTION_ADDRESSES__HPP
#define EMF_CPP_KDM_ACTION_ADDRESSES__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


// kdm::action::Addresses
class Addresses :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef Addresses_ptr ptr_type;
	
	Addresses();
	virtual ~Addresses();

	typedef kdm::code::ComputationalObject_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_ADDRESSES__HPP
