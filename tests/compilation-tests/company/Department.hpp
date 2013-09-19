
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

	typedef boost::ptr_vector < company::Employee > employees_t;
	typedef company::Employee_ptr manager_t;
	typedef int number_t;

	
	// TODO
	// TODO
	void setNumber(number_t _number);
	number_t getNumber() const;

	
protected:

	employees_t m_employees;
	manager_t m_manager;
	number_t m_number;

};

} // company


#endif // EMF_CPP_COMPANY_DEPARTMENT__HPP
