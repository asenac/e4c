
#include "ControlFlow.hpp"
#include <kdm/action/ActionPackage.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::ControlFlow include) START*/
/*PROTECTED REGION END*/

ControlFlow::ControlFlow() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(ControlFlow constructor) START*/
	/*PROTECTED REGION END*/
}

ControlFlow::~ControlFlow()
{
	/*PROTECTED REGION ID(ControlFlow destructor) START*/
	/*PROTECTED REGION END*/
}

ControlFlow::to_t ControlFlow::getTo() const
{
	return e4c::returned(m_to);
}

void ControlFlow::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

ControlFlow::from_t ControlFlow::getFrom() const
{
	return e4c::returned(m_from);
}

void ControlFlow::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::action::ControlFlow implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ControlFlow::eClassImpl() const
{
	return ActionPackage::_instance()->getControlFlow();
}
 
