
#ifndef EMF_CPP_MAKE_MAKEFILE__HPP
#define EMF_CPP_MAKE_MAKEFILE__HPP

#include <Make/fwd.hpp>
#include <Make/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace Make
{


// Make::Makefile
class Makefile
{
public:

	typedef Makefile_ptr ptr_type;
	
	Makefile();
	virtual ~Makefile();

	typedef int name_t;
	typedef std::unique_ptr < Make::Comment > comment_t;
	typedef boost::ptr_vector < Make::Element > elements_t;

	
	void setName(name_t _name);
	name_t getName() const;
	// TODO
	// TODO

	
protected:

	name_t m_name;
	comment_t m_comment;
	elements_t m_elements;

};

} // Make


#endif // EMF_CPP_MAKE_MAKEFILE__HPP
