
#include "Company.hpp"
#include <company/Department.hpp>

using namespace company;

Company::Company() : 
	m_name(),
    m_departments()
{
}

Company::~Company()
{
}

void Company::setName(name_t _name)
{
	m_name = _name;;
}

name_t Company::getName() const
{
	return m_name;
}



