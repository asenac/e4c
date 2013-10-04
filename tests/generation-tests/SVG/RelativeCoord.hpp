
#ifndef EMF_CPP_SVG_RELATIVECOORD__HPP
#define EMF_CPP_SVG_RELATIVECOORD__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Coordinates.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class RelativeCoord :  public virtual ::SVG::Coordinates
{
public:

	typedef RelativeCoord_ptr ptr_type;
	
	RelativeCoord();
	virtual ~RelativeCoord();

	
	

	/*PROTECTED REGION ID(SVG::RelativeCoord public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class SVGPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(SVG::RelativeCoord protected) START*/
	/*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_RELATIVECOORD__HPP
