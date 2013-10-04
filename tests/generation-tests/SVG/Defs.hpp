
#ifndef EMF_CPP_SVG_DEFS__HPP
#define EMF_CPP_SVG_DEFS__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/GroupingElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Defs :  public virtual ::SVG::GroupingElement
{
public:

	typedef Defs_ptr ptr_type;
	
	Defs();
	virtual ~Defs();

	
	

	/*PROTECTED REGION ID(SVG::Defs public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class SVGPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(SVG::Defs protected) START*/
	/*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_DEFS__HPP
