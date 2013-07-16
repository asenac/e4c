
#include "Department.hpp"
#include <company/Employee.hpp>

using namespace company;

Department::Department() : employees(this), manager(this), number(this)
{
}

Department::~Department()
{
}

