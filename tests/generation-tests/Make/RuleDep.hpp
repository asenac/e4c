
#ifndef EMF_CPP_MAKE_RULEDEP__HPP
#define EMF_CPP_MAKE_RULEDEP__HPP

#include <Make/fwd.hpp>
#include <Make/meta.hpp>
#include <Make/Dependency.hpp>

#include <e4c/mapping.hpp>

namespace Make
{


class RuleDep :  public virtual ::Make::Dependency
{
public:

	typedef RuleDep_ptr ptr_type;
	
	RuleDep();
	virtual ~RuleDep();

	typedef Make::Rule_ptr ruledep_t;
	
	ruledep_t getRuledep() const;
	void setRuledep(ruledep_t ruledep_);
	

	/*PROTECTED REGION ID(Make::RuleDep public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class MakePackage;

	Make::Rule_ptr m_ruledep;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(Make::RuleDep protected) START*/
	/*PROTECTED REGION END*/
};

} // Make


#endif // EMF_CPP_MAKE_RULEDEP__HPP
