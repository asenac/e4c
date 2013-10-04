
#ifndef EMF_CPP_COMPANY_COMPANY__HPP
#define EMF_CPP_COMPANY_COMPANY__HPP

#include <company/fwd.hpp>
#include <company/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace company
{


class Company : ::ecore::EObject
{
public:

	typedef Company_ptr ptr_type;
	
	Company();
	virtual ~Company();

	typedef ::ecore::EString name_t;
	typedef std::vector < company::Department_ptr > departments_t;
	
	void setName(name_t _name);
	name_t getName() const;
	departments_t getDepartments() const;
	void addDepartments(company::Department_ptr departments_);
	void addAllDepartments(const departments_t& departments_);
	

	/*PROTECTED REGION ID(company::Company public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CompanyPackage;

	name_t m_name;
	std::vector < std::unique_ptr < company::Department > > m_departments;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(company::Company protected) START*/
	/*PROTECTED REGION END*/
};

} // company


#endif // EMF_CPP_COMPANY_COMPANY__HPP
