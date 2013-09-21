
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

	typedef std::vector < Make::Dependency_ptr > dependencies_t;
	typedef std::vector < Make::ShellLine_ptr > shellLines_t;

	
	dependencies_t getDependencies() const;
	shellLines_t getShellLines() const;


	std::vector < std::unique_ptr < Make::Dependency > > m_dependencies;
	std::vector < std::unique_ptr < Make::ShellLine > > m_shellLines;

		
protected:

};

} // Make


#endif // EMF_CPP_MAKE_RULE__HPP
