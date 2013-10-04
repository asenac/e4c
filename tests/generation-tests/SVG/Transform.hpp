
#ifndef EMF_CPP_SVG_TRANSFORM__HPP
#define EMF_CPP_SVG_TRANSFORM__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Attribute.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Transform :  public virtual ::SVG::Attribute
{
public:

	typedef Transform_ptr ptr_type;
	
	virtual ~Transform();

	
	

	/*PROTECTED REGION ID(SVG::Transform public) START*/
	/*PROTECTED REGION END*/
		
protected:
	Transform();

	friend class SVGPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(SVG::Transform protected) START*/
	/*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_TRANSFORM__HPP
