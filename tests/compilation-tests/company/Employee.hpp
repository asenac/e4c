
#ifndef EMF_CPP_COMPANY_EMPLOYEE__HPP
#define EMF_CPP_COMPANY_EMPLOYEE__HPP

#include <company/fwd.hpp>
#include <company/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace company
{


class Employee : ::ecore::EObject
{
public:

	typedef Employee_ptr ptr_type;
	
	Employee();
	virtual ~Employee();

	typedef ::ecore::EString name_t;
	
	void setName(name_t _name);
	name_t getName() const;
	

	/*PROTECTED REGION ID(company::Employee public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CompanyPackage;

	name_t m_name;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(company::Employee protected) START*/
	/*PROTECTED REGION END*/
};

} // company


#endif // EMF_CPP_COMPANY_EMPLOYEE__HPP
