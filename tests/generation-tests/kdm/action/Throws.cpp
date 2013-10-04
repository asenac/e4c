
#include "Throws.hpp"
#include <kdm/action/ActionPackage.hpp>
#include <kdm/code/DataElement.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::Throws include) START*/
/*PROTECTED REGION END*/

Throws::Throws() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(Throws constructor) START*/
	/*PROTECTED REGION END*/
}

Throws::~Throws()
{
	/*PROTECTED REGION ID(Throws destructor) START*/
	/*PROTECTED REGION END*/
}

Throws::to_t Throws::getTo() const
{
	return e4c::returned(m_to);
}

void Throws::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

Throws::from_t Throws::getFrom() const
{
	return e4c::returned(m_from);
}

void Throws::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::action::Throws implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Throws::eClassImpl() const
{
	return ActionPackage::_instance()->getThrows();
}
 
