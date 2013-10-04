
#include "HasType.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/Datatype.hpp>
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::HasType include) START*/
/*PROTECTED REGION END*/

HasType::HasType() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(HasType constructor) START*/
	/*PROTECTED REGION END*/
}

HasType::~HasType()
{
	/*PROTECTED REGION ID(HasType destructor) START*/
	/*PROTECTED REGION END*/
}

HasType::to_t HasType::getTo() const
{
	return e4c::returned(m_to);
}

void HasType::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

HasType::from_t HasType::getFrom() const
{
	return e4c::returned(m_from);
}

void HasType::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::code::HasType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr HasType::eClassImpl() const
{
	return CodePackage::_instance()->getHasType();
}
 
