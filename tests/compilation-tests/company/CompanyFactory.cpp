#include "CompanyFactory.hpp"
#include "CompanyPackage.hpp"
#include "include.hpp"

using namespace company;

CompanyFactory::CompanyFactory()
{
	m_ePackage = CompanyPackage::_instance();
	// std::bind(&CompanyFactory::createEmployee, this);
	// m_ePackage->getTag_Employee();
	// std::bind(&CompanyFactory::createDepartment, this);
	// m_ePackage->getTag_Department();
	// std::bind(&CompanyFactory::createCompany, this);
	// m_ePackage->getTag_Company();
}

const CompanyFactory_ptr CompanyFactory::_instance()
{
	static CompanyFactory __instance;
	return &__instance;
}

Employee_ptr CompanyFactory::createEmployee() const
{
	return new Employee();
}

Department_ptr CompanyFactory::createDepartment() const
{
	return new Department();
}

Company_ptr CompanyFactory::createCompany() const
{
	return new Company();
}

