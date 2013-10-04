
#include "ExceptionFlow.hpp"
#include <kdm/action/ActionPackage.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::ExceptionFlow include) START*/
/*PROTECTED REGION END*/

ExceptionFlow::ExceptionFlow() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(ExceptionFlow constructor) START*/
	/*PROTECTED REGION END*/
}

ExceptionFlow::~ExceptionFlow()
{
	/*PROTECTED REGION ID(ExceptionFlow destructor) START*/
	/*PROTECTED REGION END*/
}

ExceptionFlow::to_t ExceptionFlow::getTo() const
{
	return e4c::returned(m_to);
}

void ExceptionFlow::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

ExceptionFlow::from_t ExceptionFlow::getFrom() const
{
	return e4c::returned(m_from);
}

void ExceptionFlow::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::action::ExceptionFlow implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ExceptionFlow::eClassImpl() const
{
	return ActionPackage::_instance()->getExceptionFlow();
}
 
