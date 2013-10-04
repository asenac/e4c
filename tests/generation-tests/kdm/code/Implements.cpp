
#include "Implements.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::Implements include) START*/
/*PROTECTED REGION END*/

Implements::Implements() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(Implements constructor) START*/
	/*PROTECTED REGION END*/
}

Implements::~Implements()
{
	/*PROTECTED REGION ID(Implements destructor) START*/
	/*PROTECTED REGION END*/
}

Implements::to_t Implements::getTo() const
{
	return e4c::returned(m_to);
}

void Implements::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

Implements::from_t Implements::getFrom() const
{
	return e4c::returned(m_from);
}

void Implements::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::code::Implements implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Implements::eClassImpl() const
{
	return CodePackage::_instance()->getImplements();
}
 
