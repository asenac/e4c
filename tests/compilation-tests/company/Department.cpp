
#include "Department.hpp"
#include <company/Employee.hpp>

using namespace company;

Department::Department() : 
	m_employees(),
    m_manager(),
    m_number()
{
}

Department::~Department()
{
}

Department::employees_t Department::getEmployees() const
{
	return e4c::returned(m_employees);
}

Department::manager_t Department::getManager() const
{
	return e4c::returned(m_manager);
}

void Department::setNumber(number_t _number)
{
	m_number = _number;;
}

Department::number_t Department::getNumber() const
{
	return m_number;
}



