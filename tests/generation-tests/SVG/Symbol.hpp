
#ifndef EMF_CPP_SVG_SYMBOL__HPP
#define EMF_CPP_SVG_SYMBOL__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/GroupingElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Symbol :  public virtual ::SVG::GroupingElement
{
public:

	typedef Symbol_ptr ptr_type;
	
	Symbol();
	virtual ~Symbol();

	
	

	/*PROTECTED REGION ID(SVG::Symbol public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class SVGPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(SVG::Symbol protected) START*/
	/*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_SYMBOL__HPP
