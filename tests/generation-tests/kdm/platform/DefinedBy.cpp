
#include "DefinedBy.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/code/CodeItem.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::DefinedBy include) START*/
/*PROTECTED REGION END*/

DefinedBy::DefinedBy() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(DefinedBy constructor) START*/
	/*PROTECTED REGION END*/
}

DefinedBy::~DefinedBy()
{
	/*PROTECTED REGION ID(DefinedBy destructor) START*/
	/*PROTECTED REGION END*/
}

DefinedBy::to_t DefinedBy::getTo() const
{
	return e4c::returned(m_to);
}

void DefinedBy::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

DefinedBy::from_t DefinedBy::getFrom() const
{
	return e4c::returned(m_from);
}

void DefinedBy::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::platform::DefinedBy implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DefinedBy::eClassImpl() const
{
	return PlatformPackage::_instance()->getDefinedBy();
}
 
