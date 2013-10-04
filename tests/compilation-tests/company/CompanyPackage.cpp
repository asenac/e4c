#include "CompanyPackage.hpp"
#include "CompanyFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace company;

CompanyPackage::CompanyPackage()
{
	m_eFactoryInstance = CompanyFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	
	
	m_Employee = ecoreFactory->createEClass();
	m_Employee->setName("Employee");
	addEClassifiers(m_Employee);
	m_Department = ecoreFactory->createEClass();
	m_Department->setName("Department");
	addEClassifiers(m_Department);
	m_Company = ecoreFactory->createEClass();
	m_Company->setName("Company");
	addEClassifiers(m_Company);

	
    {
        m_Employee__name = ecoreFactory->createEAttribute();
        m_Employee__name->setName("name");
        m_Employee->addEStructuralFeatures(m_Employee__name);
        m_Employee->addEAllStructuralFeatures(m_Employee__name);
        m_Employee->addEAttributes(m_Employee__name);
        m_Employee->addEAllAttributes(m_Employee__name);
    }
    {
        m_Department__employees = ecoreFactory->createEReference();
        m_Department__employees->setName("employees");
        m_Department->addEStructuralFeatures(m_Department__employees);
        m_Department->addEAllStructuralFeatures(m_Department__employees);
        m_Department->addEReferences(m_Department__employees);
        m_Department->addEAllReferences(m_Department__employees);
    }
    {
        m_Department__manager = ecoreFactory->createEReference();
        m_Department__manager->setName("manager");
        m_Department->addEStructuralFeatures(m_Department__manager);
        m_Department->addEAllStructuralFeatures(m_Department__manager);
        m_Department->addEReferences(m_Department__manager);
        m_Department->addEAllReferences(m_Department__manager);
    }
    {
        m_Department__number = ecoreFactory->createEAttribute();
        m_Department__number->setName("number");
        m_Department->addEStructuralFeatures(m_Department__number);
        m_Department->addEAllStructuralFeatures(m_Department__number);
        m_Department->addEAttributes(m_Department__number);
        m_Department->addEAllAttributes(m_Department__number);
    }
    {
        m_Company__name = ecoreFactory->createEAttribute();
        m_Company__name->setName("name");
        m_Company->addEStructuralFeatures(m_Company__name);
        m_Company->addEAllStructuralFeatures(m_Company__name);
        m_Company->addEAttributes(m_Company__name);
        m_Company->addEAllAttributes(m_Company__name);
    }
    {
        m_Company__departments = ecoreFactory->createEReference();
        m_Company__departments->setName("departments");
        m_Company->addEStructuralFeatures(m_Company__departments);
        m_Company->addEAllStructuralFeatures(m_Company__departments);
        m_Company->addEReferences(m_Company__departments);
        m_Company->addEAllReferences(m_Company__departments);
    }
	
	
	
	m_Employee->addFeatureAccesors(m_Employee__name, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< company::Employee_ptr >(o)->getName()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Department->addFeatureAccesors(m_Department__employees, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< company::Department_ptr >(o)->getEmployees()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Department->addFeatureAccesors(m_Department__manager, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< company::Department_ptr >(o)->getManager()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Department->addFeatureAccesors(m_Department__number, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< company::Department_ptr >(o)->getNumber()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Company->addFeatureAccesors(m_Company__name, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< company::Company_ptr >(o)->getName()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Company->addFeatureAccesors(m_Company__departments, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< company::Company_ptr >(o)->getDepartments()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	
}

const CompanyPackage_ptr CompanyPackage::_instance()
{
	static CompanyPackage __instance;
	return &__instance;
}

ecore::EClass_ptr CompanyPackage::getEmployee() const
{
	return m_Employee;
}
  	
e4c::tag_t CompanyPackage::getTag_Employee() const
{
	return e4c::tag< Employee >::get();
}
 
ecore::EClass_ptr CompanyPackage::getDepartment() const
{
	return m_Department;
}
  	
e4c::tag_t CompanyPackage::getTag_Department() const
{
	return e4c::tag< Department >::get();
}
 
ecore::EClass_ptr CompanyPackage::getCompany() const
{
	return m_Company;
}
  	
e4c::tag_t CompanyPackage::getTag_Company() const
{
	return e4c::tag< Company >::get();
}
 
e4c::tag_t CompanyPackage::getTag_Employee__name() const
{
	return e4c::tag< Employee__name_tag >::get();
}

ecore::EAttribute_ptr CompanyPackage::getEmployee__name() const
{
	return m_Employee__name;
}

e4c::tag_t CompanyPackage::getTag_Department__employees() const
{
	return e4c::tag< Department__employees_tag >::get();
}

ecore::EReference_ptr CompanyPackage::getDepartment__employees() const
{
	return m_Department__employees;
}

e4c::tag_t CompanyPackage::getTag_Department__manager() const
{
	return e4c::tag< Department__manager_tag >::get();
}

ecore::EReference_ptr CompanyPackage::getDepartment__manager() const
{
	return m_Department__manager;
}

e4c::tag_t CompanyPackage::getTag_Department__number() const
{
	return e4c::tag< Department__number_tag >::get();
}

ecore::EAttribute_ptr CompanyPackage::getDepartment__number() const
{
	return m_Department__number;
}

e4c::tag_t CompanyPackage::getTag_Company__name() const
{
	return e4c::tag< Company__name_tag >::get();
}

ecore::EAttribute_ptr CompanyPackage::getCompany__name() const
{
	return m_Company__name;
}

e4c::tag_t CompanyPackage::getTag_Company__departments() const
{
	return e4c::tag< Company__departments_tag >::get();
}

ecore::EReference_ptr CompanyPackage::getCompany__departments() const
{
	return m_Company__departments;
}


extern "C" ::ecore::EPackage_ptr e4c_company()
{
	return ::company::CompanyPackage::_instance();
}
