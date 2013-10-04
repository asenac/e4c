
#include "Package.hpp"
#include <emof/EmofPackage.hpp>
#include <emof/Package.hpp>
#include <emof/Type.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::Package include) START*/
/*PROTECTED REGION END*/

Package::Package() : 
	m_nestedPackage(),
    m_ownedType(),
    m_uri()
{
	/*PROTECTED REGION ID(Package constructor) START*/
	/*PROTECTED REGION END*/
}

Package::~Package()
{
	/*PROTECTED REGION ID(Package destructor) START*/
	/*PROTECTED REGION END*/
}

Package::nestedPackage_t Package::getNestedPackage() const
{
	return e4c::returned(m_nestedPackage);
}


void Package::addNestedPackage(emof::Package_ptr nestedPackage_)
{
	m_nestedPackage.insert(std::unique_ptr < emof::Package >(nestedPackage_));
}

void Package::addAllNestedPackage(const nestedPackage_t& nestedPackage_)
{
	for (auto i = nestedPackage_.begin(); i != nestedPackage_.end(); i++)
		addNestedPackage(*i);
}

Package::ownedType_t Package::getOwnedType() const
{
	return e4c::returned(m_ownedType);
}


void Package::addOwnedType(emof::Type_ptr ownedType_)
{
	ownedType_->setPackage(this);
	m_ownedType.insert(std::unique_ptr < emof::Type >(ownedType_));
}

void Package::addAllOwnedType(const ownedType_t& ownedType_)
{
	for (auto i = ownedType_.begin(); i != ownedType_.end(); i++)
		addOwnedType(*i);
}

void Package::setUri(uri_t _uri)
{
	m_uri = _uri;;
}

Package::uri_t Package::getUri() const
{
	return m_uri;
}



/*PROTECTED REGION ID(emof::Package implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Package::eClassImpl() const
{
	return EmofPackage::_instance()->getPackage();
}
 
