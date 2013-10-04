
#include "PlatformModel.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::PlatformModel include) START*/
/*PROTECTED REGION END*/

PlatformModel::PlatformModel() : 
	m_platformElement()
{
	/*PROTECTED REGION ID(PlatformModel constructor) START*/
	/*PROTECTED REGION END*/
}

PlatformModel::~PlatformModel()
{
	/*PROTECTED REGION ID(PlatformModel destructor) START*/
	/*PROTECTED REGION END*/
}

PlatformModel::platformElement_t PlatformModel::getPlatformElement() const
{
	return e4c::returned(m_platformElement);
}


void PlatformModel::addPlatformElement(kdm::platform::AbstractPlatformElement_ptr platformElement_)
{
	m_platformElement.insert(std::unique_ptr < kdm::platform::AbstractPlatformElement >(platformElement_));
}

void PlatformModel::addAllPlatformElement(const platformElement_t& platformElement_)
{
	for (auto i = platformElement_.begin(); i != platformElement_.end(); i++)
		addPlatformElement(*i);
}



/*PROTECTED REGION ID(kdm::platform::PlatformModel implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr PlatformModel::eClassImpl() const
{
	return PlatformPackage::_instance()->getPlatformModel();
}
 
