#include "CompanyPackage.hpp"
#include "CompanyFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace company;

CompanyPackage::CompanyPackage()
{
	m_eFactoryInstance = CompanyFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
}

const CompanyPackage_ptr CompanyPackage::_instance()
{
	static CompanyPackage __instance;
	return &__instance;
}

e4c::tag_t CompanyPackage::getTag_Employee() const
{
	return e4c::tag< Employee >::get();
}
 
e4c::tag_t CompanyPackage::getTag_Department() const
{
	return e4c::tag< Department >::get();
}
 
e4c::tag_t CompanyPackage::getTag_Company() const
{
	return e4c::tag< Company >::get();
}
 
e4c::tag_t CompanyPackage::getTag_Employee__name() const
{
	return e4c::tag< Employee__name_tag >::get();
}

e4c::tag_t CompanyPackage::getTag_Department__employees() const
{
	return e4c::tag< Department__employees_tag >::get();
}

e4c::tag_t CompanyPackage::getTag_Department__manager() const
{
	return e4c::tag< Department__manager_tag >::get();
}

e4c::tag_t CompanyPackage::getTag_Department__number() const
{
	return e4c::tag< Department__number_tag >::get();
}

e4c::tag_t CompanyPackage::getTag_Company__name() const
{
	return e4c::tag< Company__name_tag >::get();
}

e4c::tag_t CompanyPackage::getTag_Company__departments() const
{
	return e4c::tag< Company__departments_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_company()
{
	return ::company::CompanyPackage::_instance();
}
