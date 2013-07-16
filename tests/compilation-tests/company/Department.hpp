
#ifndef EMF_CPP_COMPANY_DEPARTMENT__HPP
#define EMF_CPP_COMPANY_DEPARTMENT__HPP

#include <company/fwd.hpp>
#include <company/meta.hpp>
#include <ecore/EObject.hpp>

namespace company
{


// company::Department
class Department : public virtual ::ecore::EObject
{
public:

	typedef Department_ptr ptr_type;

	Department();
	virtual ~Department();

	// Typedefs
	typedef ::e4c::impl::reference< Department__employees_tag > _employees_t;
	typedef ::e4c::impl::reference< Department__manager_tag > _manager_t;
	typedef ::e4c::impl::attribute< Department__number_tag > _number_t;

	
	// Members
	_employees_t employees;
	_manager_t manager;
	_number_t number;

};

} // company


#endif // EMF_CPP_COMPANY_DEPARTMENT__HPP
