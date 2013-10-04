
#ifndef EMF_CPP_SVG_PATH__HPP
#define EMF_CPP_SVG_PATH__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Shape.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Path :  public virtual ::SVG::Shape
{
public:

	typedef Path_ptr ptr_type;
	
	Path();
	virtual ~Path();

	typedef ::PrimitiveTypes::Double pathLength_t;
	typedef ::PrimitiveTypes::String d_t;
	typedef ::PrimitiveTypes::String markerEnd_t;
	typedef ::PrimitiveTypes::String markerStart_t;
	
	void setPathLength(pathLength_t _pathLength);
	pathLength_t getPathLength() const;
	void setD(d_t _d);
	d_t getD() const;
	void setMarkerEnd(markerEnd_t _markerEnd);
	markerEnd_t getMarkerEnd() const;
	void setMarkerStart(markerStart_t _markerStart);
	markerStart_t getMarkerStart() const;
	

	/*PROTECTED REGION ID(SVG::Path public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class SVGPackage;

	pathLength_t m_pathLength;
	d_t m_d;
	markerEnd_t m_markerEnd;
	markerStart_t m_markerStart;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(SVG::Path protected) START*/
	/*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_PATH__HPP
