
#ifndef EMF_CPP_MAKE_RULE__HPP
#define EMF_CPP_MAKE_RULE__HPP

#include <Make/fwd.hpp>
#include <Make/meta.hpp>
#include <Make/Element.hpp>

#include <e4c/mapping.hpp>

namespace Make
{


class Rule :  public virtual ::Make::Element
{
public:

	typedef Rule_ptr ptr_type;
	
	Rule();
	virtual ~Rule();

	typedef std::vector < Make::Dependency_ptr > dependencies_t;
	typedef std::vector < Make::ShellLine_ptr > shellLines_t;
	
	dependencies_t getDependencies() const;
	void addDependencies(Make::Dependency_ptr dependencies_);
	void addAllDependencies(const dependencies_t& dependencies_);
	shellLines_t getShellLines() const;
	void addShellLines(Make::ShellLine_ptr shellLines_);
	void addAllShellLines(const shellLines_t& shellLines_);
	

	/*PROTECTED REGION ID(Make::Rule public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class MakePackage;

	std::vector < std::unique_ptr < Make::Dependency > > m_dependencies;
	std::vector < std::unique_ptr < Make::ShellLine > > m_shellLines;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(Make::Rule protected) START*/
	/*PROTECTED REGION END*/
};

} // Make


#endif // EMF_CPP_MAKE_RULE__HPP
