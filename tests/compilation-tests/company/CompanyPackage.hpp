#ifndef EMF_CPP_COMPANY_PACKAGE_HPP
#define EMF_CPP_COMPANY_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <company/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace company
{


class CompanyPackage : public ::ecore::EPackage
{
public:
    static const CompanyPackage_ptr _instance();

     ::ecore::EClass_ptr getEmployee() const;
     ::ecore::EClass_ptr getDepartment() const;
     ::ecore::EClass_ptr getCompany() const;

     ::ecore::EAttribute_ptr getEmployee__name() const;
     ::ecore::EReference_ptr getDepartment__employees() const;
     ::ecore::EReference_ptr getDepartment__manager() const;
     ::ecore::EAttribute_ptr getDepartment__number() const;
     ::ecore::EAttribute_ptr getCompany__name() const;
     ::ecore::EReference_ptr getCompany__departments() const;

     e4c::tag_t getTag_Employee() const;
     e4c::tag_t getTag_Department() const;
     e4c::tag_t getTag_Company() const;

     e4c::tag_t getTag_Employee__name() const;
     e4c::tag_t getTag_Department__employees() const;
     e4c::tag_t getTag_Department__manager() const;
     e4c::tag_t getTag_Department__number() const;
     e4c::tag_t getTag_Company__name() const;
     e4c::tag_t getTag_Company__departments() const;

protected:
    CompanyPackage();

     ::ecore::EClass_ptr m_Employee;
     ::ecore::EClass_ptr m_Department;
     ::ecore::EClass_ptr m_Company;
     ::ecore::EAttribute_ptr m_Employee__name;
     ::ecore::EReference_ptr m_Department__employees;
     ::ecore::EReference_ptr m_Department__manager;
     ::ecore::EAttribute_ptr m_Department__number;
     ::ecore::EAttribute_ptr m_Company__name;
     ::ecore::EReference_ptr m_Company__departments;
};

} // company


#endif // EMF_CPP_COMPANY_PACKAGE_HPP
