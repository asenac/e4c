
#ifndef EMF_CPP_KDM_ACTION_DISPATCHES__HPP
#define EMF_CPP_KDM_ACTION_DISPATCHES__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


class Dispatches :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef Dispatches_ptr ptr_type;
	
	Dispatches();
	virtual ~Dispatches();

	typedef kdm::code::DataElement_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;
	
	to_t getTo() const;
	void setTo(to_t to_);
	from_t getFrom() const;
	void setFrom(from_t from_);
	

	/*PROTECTED REGION ID(kdm::action::Dispatches public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ActionPackage;

	kdm::code::DataElement_ptr m_to;
	kdm::action::ActionElement_ptr m_from;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::action::Dispatches protected) START*/
	/*PROTECTED REGION END*/
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_DISPATCHES__HPP
