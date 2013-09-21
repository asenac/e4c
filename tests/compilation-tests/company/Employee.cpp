
#include "Employee.hpp"

using namespace company;

Employee::Employee() : 
	m_name()
{
}

Employee::~Employee()
{
}

void Employee::setName(name_t _name)
{
	m_name = _name;;
}

Employee::name_t Employee::getName() const
{
	return m_name;
}



