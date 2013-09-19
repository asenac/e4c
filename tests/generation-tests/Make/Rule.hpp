
#ifndef EMF_CPP_MAKE_RULE__HPP
#define EMF_CPP_MAKE_RULE__HPP

#include <Make/fwd.hpp>
#include <Make/meta.hpp>
#include <Make/Element.hpp>

#include <e4c/mapping.hpp>

namespace Make
{


// Make::Rule
class Rule :  public virtual ::Make::Element
{
public:

	typedef Rule_ptr ptr_type;
	
	Rule();
	virtual ~Rule();

	typedef boost::ptr_vector < Make::Dependency > dependencies_t;
	typedef boost::ptr_vector < Make::ShellLine > shellLines_t;

	
	// TODO
	// TODO

	
protected:

	dependencies_t m_dependencies;
	shellLines_t m_shellLines;

};

} // Make


#endif // EMF_CPP_MAKE_RULE__HPP
