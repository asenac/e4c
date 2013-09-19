#ifndef EMF_CPP_COMPANY_FACTORY_HPP
#define EMF_CPP_COMPANY_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <company/fwd.hpp>

namespace company
{


class CompanyFactory : public ::ecore::EFactory
{
public:

    static const CompanyFactory_ptr _instance();

    Employee_ptr createEmployee() const;
    Department_ptr createDepartment() const;
    Company_ptr createCompany() const;

protected:

    CompanyFactory();
};

} // company


#endif // EMF_CPP_COMPANY_FACTORY_HPP
