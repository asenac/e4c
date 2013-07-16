
#ifndef EMF_CPP_COMPANY_COMPANY__HPP
#define EMF_CPP_COMPANY_COMPANY__HPP

#include <company/fwd.hpp>
#include <company/meta.hpp>
#include <ecore/EObject.hpp>

namespace company
{


// company::Company
class Company : public virtual ::ecore::EObject
{
public:

	typedef Company_ptr ptr_type;

	Company();
	virtual ~Company();

	// Typedefs
	typedef ::e4c::impl::attribute< Company__name_tag > _name_t;
	typedef ::e4c::impl::reference< Company__departments_tag > _departments_t;

	
	// Members
	_name_t name;
	_departments_t departments;

};

} // company


#endif // EMF_CPP_COMPANY_COMPANY__HPP
