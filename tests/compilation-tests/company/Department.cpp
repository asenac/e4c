
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

void Department::setNumber(number_t _number)
{
	m_number = _number;;
}

number_t Department::getNumber() const
{
	return m_number;
}



