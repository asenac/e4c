
#include "ExtensionFamily.hpp"
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/kdm/Stereotype.hpp>

using namespace kdm::kdm;

/*PROTECTED REGION ID(kdm::kdm::ExtensionFamily include) START*/
/*PROTECTED REGION END*/

ExtensionFamily::ExtensionFamily() : 
	m_stereotype(),
    m_name()
{
	/*PROTECTED REGION ID(ExtensionFamily constructor) START*/
	/*PROTECTED REGION END*/
}

ExtensionFamily::~ExtensionFamily()
{
	/*PROTECTED REGION ID(ExtensionFamily destructor) START*/
	/*PROTECTED REGION END*/
}

ExtensionFamily::stereotype_t ExtensionFamily::getStereotype() const
{
	return e4c::returned(m_stereotype);
}


void ExtensionFamily::addStereotype(kdm::kdm::Stereotype_ptr stereotype_)
{
	m_stereotype.insert(std::unique_ptr < kdm::kdm::Stereotype >(stereotype_));
}

void ExtensionFamily::addAllStereotype(const stereotype_t& stereotype_)
{
	for (auto i = stereotype_.begin(); i != stereotype_.end(); i++)
		addStereotype(*i);
}

void ExtensionFamily::setName(name_t _name)
{
	m_name = _name;;
}

ExtensionFamily::name_t ExtensionFamily::getName() const
{
	return m_name;
}



/*PROTECTED REGION ID(kdm::kdm::ExtensionFamily implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ExtensionFamily::eClassImpl() const
{
	return KdmPackage::_instance()->getExtensionFamily();
}
 
