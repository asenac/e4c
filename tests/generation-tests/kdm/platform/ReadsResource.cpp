
#include "ReadsResource.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/platform/ResourceType.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::ReadsResource include) START*/
/*PROTECTED REGION END*/

ReadsResource::ReadsResource() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(ReadsResource constructor) START*/
	/*PROTECTED REGION END*/
}

ReadsResource::~ReadsResource()
{
	/*PROTECTED REGION ID(ReadsResource destructor) START*/
	/*PROTECTED REGION END*/
}

ReadsResource::to_t ReadsResource::getTo() const
{
	return e4c::returned(m_to);
}

void ReadsResource::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

ReadsResource::from_t ReadsResource::getFrom() const
{
	return e4c::returned(m_from);
}

void ReadsResource::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::platform::ReadsResource implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ReadsResource::eClassImpl() const
{
	return PlatformPackage::_instance()->getReadsResource();
}
 
