
#include "BindsTo.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/platform/ResourceType.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::BindsTo include) START*/
/*PROTECTED REGION END*/

BindsTo::BindsTo() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(BindsTo constructor) START*/
	/*PROTECTED REGION END*/
}

BindsTo::~BindsTo()
{
	/*PROTECTED REGION ID(BindsTo destructor) START*/
	/*PROTECTED REGION END*/
}

BindsTo::to_t BindsTo::getTo() const
{
	return e4c::returned(m_to);
}

void BindsTo::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

BindsTo::from_t BindsTo::getFrom() const
{
	return e4c::returned(m_from);
}

void BindsTo::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::platform::BindsTo implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr BindsTo::eClassImpl() const
{
	return PlatformPackage::_instance()->getBindsTo();
}
 
