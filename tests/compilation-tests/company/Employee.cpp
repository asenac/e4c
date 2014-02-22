
#include "Employee.hpp"
#include <company/CompanyPackage.hpp>

using namespace company;

/*PROTECTED REGION ID(company::Employee include) START*/
/*PROTECTED REGION END*/

Employee::Employee() :
    m_name()
{
    /*PROTECTED REGION ID(Employee constructor) START*/
    /*PROTECTED REGION END*/
}

Employee::~Employee()
{
    /*PROTECTED REGION ID(Employee destructor) START*/
    /*PROTECTED REGION END*/
}

void Employee::setName(name_t _name)
{
    m_name = _name;;
}

Employee::name_t Employee::getName() const
{
    return m_name;
}



/*PROTECTED REGION ID(company::Employee implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Employee::eClassImpl() const
{
    return CompanyPackage::_instance()->getEmployee();
}

