
#include "ActionRelationship.hpp"
#include <kdm/action/ActionPackage.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::ActionRelationship include) START*/
/*PROTECTED REGION END*/

ActionRelationship::ActionRelationship() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(ActionRelationship constructor) START*/
	/*PROTECTED REGION END*/
}

ActionRelationship::~ActionRelationship()
{
	/*PROTECTED REGION ID(ActionRelationship destructor) START*/
	/*PROTECTED REGION END*/
}

ActionRelationship::to_t ActionRelationship::getTo() const
{
	return e4c::returned(m_to);
}

void ActionRelationship::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

ActionRelationship::from_t ActionRelationship::getFrom() const
{
	return e4c::returned(m_from);
}

void ActionRelationship::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::action::ActionRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ActionRelationship::eClassImpl() const
{
	return ActionPackage::_instance()->getActionRelationship();
}
 
