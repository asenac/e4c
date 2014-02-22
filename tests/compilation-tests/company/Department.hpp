
#ifndef EMF_CPP_COMPANY_DEPARTMENT__HPP
#define EMF_CPP_COMPANY_DEPARTMENT__HPP

#include <company/fwd.hpp>
#include <company/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace company
{


class Department : ::ecore::EObject
{
public:

    typedef Department_ptr ptr_type;

    Department();
    virtual ~Department();

    typedef std::vector < company::Employee_ptr > employees_t;
    typedef company::Employee_ptr manager_t;
    typedef ::ecore::EInt number_t;

    employees_t getEmployees() const;
    void addEmployees(company::Employee_ptr employees_);
    void addAllEmployees(const employees_t& employees_);
    manager_t getManager() const;
    void setManager(manager_t manager_);
    void setNumber(number_t _number);
    number_t getNumber() const;


    /*PROTECTED REGION ID(company::Department public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CompanyPackage;

    std::vector < std::unique_ptr < company::Employee > > m_employees;
    company::Employee_ptr m_manager;
    number_t m_number;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(company::Department protected) START*/
    /*PROTECTED REGION END*/
};

} // company


#endif // EMF_CPP_COMPANY_DEPARTMENT__HPP
