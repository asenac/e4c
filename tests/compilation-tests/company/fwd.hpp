#ifndef EMF_CPP_COMPANY_FWD_HPP
#define EMF_CPP_COMPANY_FWD_HPP


namespace company
{


class CompanyPackage;
typedef CompanyPackage * CompanyPackage_ptr;
class CompanyFactory;
typedef CompanyFactory * CompanyFactory_ptr;

// Data types


// Classes
class Employee;
typedef Employee* Employee_ptr;
class Department;
typedef Department* Department_ptr;
class Company;
typedef Company* Company_ptr;


// Structural features
struct Employee__name_tag;
struct Department__employees_tag;
struct Department__manager_tag;
struct Department__number_tag;
struct Company__name_tag;
struct Company__departments_tag;


} // company


#endif // EMF_CPP_COMPANY_FWD_HPP
