
#ifndef EMF_CPP_XTEXT_GROUP__HPP
#define EMF_CPP_XTEXT_GROUP__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/CompoundElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class Group :  public virtual ::xtext::CompoundElement
{
public:

	typedef Group_ptr ptr_type;
	
	Group();
	virtual ~Group();

	
	

	/*PROTECTED REGION ID(xtext::Group public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class XtextPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xtext::Group protected) START*/
	/*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_GROUP__HPP
