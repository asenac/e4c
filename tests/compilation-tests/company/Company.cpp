
#include "Company.hpp"
#include <company/CompanyPackage.hpp>
#include <company/Department.hpp>

using namespace company;

/*PROTECTED REGION ID(company::Company include) START*/
/*PROTECTED REGION END*/

Company::Company() :
    m_name(),
    m_departments()
{
    /*PROTECTED REGION ID(Company constructor) START*/
    /*PROTECTED REGION END*/
}

Company::~Company()
{
    /*PROTECTED REGION ID(Company destructor) START*/
    /*PROTECTED REGION END*/
}

void Company::setName(name_t _name)
{
    m_name = _name;;
}

Company::name_t Company::getName() const
{
    return m_name;
}

Company::departments_t Company::getDepartments() const
{
    return e4c::returned(m_departments);
}


void Company::addDepartments(company::Department_ptr departments_)
{
    m_departments.push_back(std::unique_ptr < company::Department >(departments_));
}

void Company::addAllDepartments(const departments_t& departments_)
{
    for (auto i = departments_.begin(); i != departments_.end(); i++)
        addDepartments(*i);
}



/*PROTECTED REGION ID(company::Company implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Company::eClassImpl() const
{
    return CompanyPackage::_instance()->getCompany();
}

