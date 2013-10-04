
#include "VisibleIn.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::VisibleIn include) START*/
/*PROTECTED REGION END*/

VisibleIn::VisibleIn() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(VisibleIn constructor) START*/
	/*PROTECTED REGION END*/
}

VisibleIn::~VisibleIn()
{
	/*PROTECTED REGION ID(VisibleIn destructor) START*/
	/*PROTECTED REGION END*/
}

VisibleIn::to_t VisibleIn::getTo() const
{
	return e4c::returned(m_to);
}

void VisibleIn::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

VisibleIn::from_t VisibleIn::getFrom() const
{
	return e4c::returned(m_from);
}

void VisibleIn::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::code::VisibleIn implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr VisibleIn::eClassImpl() const
{
	return CodePackage::_instance()->getVisibleIn();
}
 
