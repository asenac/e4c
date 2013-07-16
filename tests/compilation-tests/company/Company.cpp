
#include "Company.hpp"
#include <company/Department.hpp>

using namespace company;

Company::Company() : name(this), departments(this)
{
}

Company::~Company()
{
}

