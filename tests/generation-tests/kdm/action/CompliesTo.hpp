
#ifndef EMF_CPP_KDM_ACTION_COMPLIESTO__HPP
#define EMF_CPP_KDM_ACTION_COMPLIESTO__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


// kdm::action::CompliesTo
class CompliesTo :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef CompliesTo_ptr ptr_type;
	
	CompliesTo();
	virtual ~CompliesTo();

	typedef kdm::code::CodeItem_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_COMPLIESTO__HPP
