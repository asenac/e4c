
#ifndef EMF_CPP_SVG_ABSOLUTECOORD__HPP
#define EMF_CPP_SVG_ABSOLUTECOORD__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Coordinates.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class AbsoluteCoord :  public virtual ::SVG::Coordinates
{
public:

	typedef AbsoluteCoord_ptr ptr_type;
	
	AbsoluteCoord();
	virtual ~AbsoluteCoord();

	
	

	/*PROTECTED REGION ID(SVG::AbsoluteCoord public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class SVGPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(SVG::AbsoluteCoord protected) START*/
	/*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_ABSOLUTECOORD__HPP
