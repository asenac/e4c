
#include "ManagesResource.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/platform/ResourceType.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::ManagesResource include) START*/
/*PROTECTED REGION END*/

ManagesResource::ManagesResource() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(ManagesResource constructor) START*/
	/*PROTECTED REGION END*/
}

ManagesResource::~ManagesResource()
{
	/*PROTECTED REGION ID(ManagesResource destructor) START*/
	/*PROTECTED REGION END*/
}

ManagesResource::to_t ManagesResource::getTo() const
{
	return e4c::returned(m_to);
}

void ManagesResource::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

ManagesResource::from_t ManagesResource::getFrom() const
{
	return e4c::returned(m_from);
}

void ManagesResource::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::platform::ManagesResource implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ManagesResource::eClassImpl() const
{
	return PlatformPackage::_instance()->getManagesResource();
}
 
