
#ifndef EMF_CPP_XTEXT_ALTERNATIVES__HPP
#define EMF_CPP_XTEXT_ALTERNATIVES__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/CompoundElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class Alternatives :  public virtual ::xtext::CompoundElement
{
public:

	typedef Alternatives_ptr ptr_type;
	
	Alternatives();
	virtual ~Alternatives();

	
	

	/*PROTECTED REGION ID(xtext::Alternatives public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class XtextPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xtext::Alternatives protected) START*/
	/*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_ALTERNATIVES__HPP
