
#include "PlatformAction.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/platform/PlatformEvent.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::PlatformAction include) START*/
/*PROTECTED REGION END*/

PlatformAction::PlatformAction() : 
	m_kind(),
    m_platformElement()
{
	/*PROTECTED REGION ID(PlatformAction constructor) START*/
	/*PROTECTED REGION END*/
}

PlatformAction::~PlatformAction()
{
	/*PROTECTED REGION ID(PlatformAction destructor) START*/
	/*PROTECTED REGION END*/
}

void PlatformAction::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

PlatformAction::kind_t PlatformAction::getKind() const
{
	return m_kind;
}

PlatformAction::platformElement_t PlatformAction::getPlatformElement() const
{
	return e4c::returned(m_platformElement);
}


void PlatformAction::addPlatformElement(kdm::platform::PlatformEvent_ptr platformElement_)
{
	m_platformElement.insert(std::unique_ptr < kdm::platform::PlatformEvent >(platformElement_));
}

void PlatformAction::addAllPlatformElement(const platformElement_t& platformElement_)
{
	for (auto i = platformElement_.begin(); i != platformElement_.end(); i++)
		addPlatformElement(*i);
}



/*PROTECTED REGION ID(kdm::platform::PlatformAction implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr PlatformAction::eClassImpl() const
{
	return PlatformPackage::_instance()->getPlatformAction();
}
 
