
#ifndef EMF_CPP_COMPANY_EMPLOYEE__HPP
#define EMF_CPP_COMPANY_EMPLOYEE__HPP

#include <company/fwd.hpp>
#include <company/meta.hpp>
#include <ecore/EObject.hpp>

namespace company
{


// company::Employee
class Employee : public virtual ::ecore::EObject
{
public:

	typedef Employee_ptr ptr_type;

	Employee();
	virtual ~Employee();

	// Typedefs
	typedef ::e4c::impl::attribute< Employee__name_tag > _name_t;

	
	// Members
	_name_t name;

};

} // company


#endif // EMF_CPP_COMPANY_EMPLOYEE__HPP
