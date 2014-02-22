
#include "Department.hpp"
#include <company/CompanyPackage.hpp>
#include <company/Employee.hpp>

using namespace company;

/*PROTECTED REGION ID(company::Department include) START*/
/*PROTECTED REGION END*/

Department::Department() :
    m_employees(),
    m_manager(),
    m_number()
{
    /*PROTECTED REGION ID(Department constructor) START*/
    /*PROTECTED REGION END*/
}

Department::~Department()
{
    /*PROTECTED REGION ID(Department destructor) START*/
    /*PROTECTED REGION END*/
}

Department::employees_t Department::getEmployees() const
{
    return e4c::returned(m_employees);
}


void Department::addEmployees(company::Employee_ptr employees_)
{
    m_employees.push_back(std::unique_ptr < company::Employee >(employees_));
}

void Department::addAllEmployees(const employees_t& employees_)
{
    for (auto i = employees_.begin(); i != employees_.end(); i++)
        addEmployees(*i);
}

Department::manager_t Department::getManager() const
{
    return e4c::returned(m_manager);
}

void Department::setManager(manager_t manager_)
{
    if (m_manager == manager_)
        return;
    m_manager = manager_;
}

void Department::setNumber(number_t _number)
{
    m_number = _number;;
}

Department::number_t Department::getNumber() const
{
    return m_number;
}



/*PROTECTED REGION ID(company::Department implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Department::eClassImpl() const
{
    return CompanyPackage::_instance()->getDepartment();
}

