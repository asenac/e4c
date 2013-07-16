#include "CompanyPackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace company;

CompanyPackage::CompanyPackage()
{
}

CompanyPackage_ptr CompanyPackage::_instance()
{
	static CompanyPackage __instance;
	return &__instance;
}

e4c::tag_t CompanyPackage::getTag_Employee()
{
	return e4c::tag< Employee >::get();
}
 
e4c::tag_t CompanyPackage::getTag_Department()
{
	return e4c::tag< Department >::get();
}
 
e4c::tag_t CompanyPackage::getTag_Company()
{
	return e4c::tag< Company >::get();
}
 
e4c::tag_t CompanyPackage::getTag_Employee__name()
{
	return e4c::tag< Employee__name_tag >::get();
}

e4c::tag_t CompanyPackage::getTag_Department__employees()
{
	return e4c::tag< Department__employees_tag >::get();
}

e4c::tag_t CompanyPackage::getTag_Department__manager()
{
	return e4c::tag< Department__manager_tag >::get();
}

e4c::tag_t CompanyPackage::getTag_Department__number()
{
	return e4c::tag< Department__number_tag >::get();
}

e4c::tag_t CompanyPackage::getTag_Company__name()
{
	return e4c::tag< Company__name_tag >::get();
}

e4c::tag_t CompanyPackage::getTag_Company__departments()
{
	return e4c::tag< Company__departments_tag >::get();
}

extern "C" ::ecore::EPackage_ptr e4c_company()
{
	return ::company::CompanyPackage::_instance();
}
