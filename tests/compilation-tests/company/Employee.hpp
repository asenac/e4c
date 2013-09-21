
#ifndef EMF_CPP_COMPANY_EMPLOYEE__HPP
#define EMF_CPP_COMPANY_EMPLOYEE__HPP

#include <company/fwd.hpp>
#include <company/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace company
{


// company::Employee
class Employee
{
public:

	typedef Employee_ptr ptr_type;
	
	Employee();
	virtual ~Employee();

	typedef ::ecore::EString name_t;

	
	void setName(name_t _name);
	name_t getName() const;


	name_t m_name;

		
protected:

};

} // company


#endif // EMF_CPP_COMPANY_EMPLOYEE__HPP
