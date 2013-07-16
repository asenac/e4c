#ifndef EMF_CPP_COMPANY_PACKAGE_HPP
#define EMF_CPP_COMPANY_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <company/fwd.hpp>

namespace company
{


class CompanyPackage : public ::ecore::EPackage
{
public:
    static CompanyPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_Employee();
 	e4c::tag_t getTag_Department();
 	e4c::tag_t getTag_Company();
 
 	// Structural features
 	e4c::tag_t getTag_Employee__name();
 	e4c::tag_t getTag_Department__employees();
 	e4c::tag_t getTag_Department__manager();
 	e4c::tag_t getTag_Department__number();
 	e4c::tag_t getTag_Company__name();
 	e4c::tag_t getTag_Company__departments();

protected:
    CompanyPackage();
};

} // company


#endif // EMF_CPP_COMPANY_PACKAGE_HPP
