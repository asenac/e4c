#ifndef EMF_CPP_COMPANY_PACKAGE_HPP
#define EMF_CPP_COMPANY_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <company/fwd.hpp>

namespace company
{


class CompanyPackage : public ::ecore::EPackage
{
public:
    static const CompanyPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_Employee() const;
 	e4c::tag_t getTag_Department() const;
 	e4c::tag_t getTag_Company() const;
 
 	// Structural features
 	e4c::tag_t getTag_Employee__name() const;
 	e4c::tag_t getTag_Department__employees() const;
 	e4c::tag_t getTag_Department__manager() const;
 	e4c::tag_t getTag_Department__number() const;
 	e4c::tag_t getTag_Company__name() const;
 	e4c::tag_t getTag_Company__departments() const;

protected:
    CompanyPackage();
};

} // company


#endif // EMF_CPP_COMPANY_PACKAGE_HPP
