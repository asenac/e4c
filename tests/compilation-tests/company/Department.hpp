
#ifndef EMF_CPP_COMPANY_DEPARTMENT__HPP
#define EMF_CPP_COMPANY_DEPARTMENT__HPP

#include <company/fwd.hpp>
#include <company/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace company
{


// company::Department
class Department
{
public:

	typedef Department_ptr ptr_type;
	
	Department();
	virtual ~Department();

	typedef std::vector < company::Employee_ptr > employees_t;
	typedef company::Employee_ptr manager_t;
	typedef ::ecore::EInt number_t;

	
	employees_t getEmployees() const;
	manager_t getManager() const;
	void setNumber(number_t _number);
	number_t getNumber() const;


	std::vector < std::unique_ptr < company::Employee > > m_employees;
	company::Employee_ptr m_manager;
	number_t m_number;

		
protected:

};

} // company


#endif // EMF_CPP_COMPANY_DEPARTMENT__HPP
