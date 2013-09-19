
#ifndef EMF_CPP_MAKE_RULEDEP__HPP
#define EMF_CPP_MAKE_RULEDEP__HPP

#include <Make/fwd.hpp>
#include <Make/meta.hpp>
#include <Make/Dependency.hpp>

#include <e4c/mapping.hpp>

namespace Make
{


// Make::RuleDep
class RuleDep :  public virtual ::Make::Dependency
{
public:

	typedef RuleDep_ptr ptr_type;
	
	RuleDep();
	virtual ~RuleDep();

	typedef Make::Rule_ptr ruledep_t;

	
	// TODO

	
protected:

	ruledep_t m_ruledep;

};

} // Make


#endif // EMF_CPP_MAKE_RULEDEP__HPP
