
#ifndef EMF_CPP_XTEXT_WILDCARD__HPP
#define EMF_CPP_XTEXT_WILDCARD__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class Wildcard :  public virtual ::xtext::AbstractElement
{
public:

	typedef Wildcard_ptr ptr_type;
	
	Wildcard();
	virtual ~Wildcard();

	
	

	/*PROTECTED REGION ID(xtext::Wildcard public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class XtextPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xtext::Wildcard protected) START*/
	/*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_WILDCARD__HPP
