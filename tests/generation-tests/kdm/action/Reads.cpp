
#include "Reads.hpp"
#include <kdm/action/ActionPackage.hpp>
#include <kdm/code/DataElement.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::Reads include) START*/
/*PROTECTED REGION END*/

Reads::Reads() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(Reads constructor) START*/
	/*PROTECTED REGION END*/
}

Reads::~Reads()
{
	/*PROTECTED REGION ID(Reads destructor) START*/
	/*PROTECTED REGION END*/
}

Reads::to_t Reads::getTo() const
{
	return e4c::returned(m_to);
}

void Reads::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

Reads::from_t Reads::getFrom() const
{
	return e4c::returned(m_from);
}

void Reads::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::action::Reads implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Reads::eClassImpl() const
{
	return ActionPackage::_instance()->getReads();
}
 
