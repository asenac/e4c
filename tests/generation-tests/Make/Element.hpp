
#ifndef EMF_CPP_MAKE_ELEMENT__HPP
#define EMF_CPP_MAKE_ELEMENT__HPP

#include <Make/fwd.hpp>
#include <Make/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace Make
{


// Make::Element
class Element
{
public:

	typedef Element_ptr ptr_type;
	
	virtual ~Element();

	typedef int name_t;

	
	void setName(name_t _name);
	name_t getName() const;

	
protected:
	Element();

	name_t m_name;

};

} // Make


#endif // EMF_CPP_MAKE_ELEMENT__HPP
