
#ifndef EMF_CPP_KDM_ACTION_CREATES__HPP
#define EMF_CPP_KDM_ACTION_CREATES__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


// kdm::action::Creates
class Creates :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef Creates_ptr ptr_type;
	
	Creates();
	virtual ~Creates();

	typedef kdm::code::Datatype_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::code::Datatype_ptr m_to;
	kdm::action::ActionElement_ptr m_from;

		
protected:

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_CREATES__HPP
