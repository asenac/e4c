
#ifndef EMF_CPP_COMPANY_COMPANY__HPP
#define EMF_CPP_COMPANY_COMPANY__HPP

#include <company/fwd.hpp>
#include <company/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace company
{


// company::Company
class Company
{
public:

	typedef Company_ptr ptr_type;
	
	Company();
	virtual ~Company();

	typedef int name_t;
	typedef boost::ptr_vector < company::Department > departments_t;

	
	void setName(name_t _name);
	name_t getName() const;
	// TODO

	
protected:

	name_t m_name;
	departments_t m_departments;

};

} // company


#endif // EMF_CPP_COMPANY_COMPANY__HPP
