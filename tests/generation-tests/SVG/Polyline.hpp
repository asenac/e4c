
#ifndef EMF_CPP_SVG_POLYLINE__HPP
#define EMF_CPP_SVG_POLYLINE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Shape.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::Polyline
class Polyline :  public virtual ::SVG::Shape
{
public:

	typedef Polyline_ptr ptr_type;
	
	Polyline();
	virtual ~Polyline();

	typedef std::vector < SVG::Point_ptr > waypoints_t;
	typedef ::PrimitiveTypes::String strokeDashArray_t;
	typedef ::PrimitiveTypes::String markerEnd_t;
	typedef ::PrimitiveTypes::String markerStart_t;

	
	waypoints_t getWaypoints() const;
	void setStrokeDashArray(strokeDashArray_t _strokeDashArray);
	strokeDashArray_t getStrokeDashArray() const;
	void setMarkerEnd(markerEnd_t _markerEnd);
	markerEnd_t getMarkerEnd() const;
	void setMarkerStart(markerStart_t _markerStart);
	markerStart_t getMarkerStart() const;


	std::vector < std::unique_ptr < SVG::Point > > m_waypoints;
	strokeDashArray_t m_strokeDashArray;
	markerEnd_t m_markerEnd;
	markerStart_t m_markerStart;

		
protected:

};

} // SVG


#endif // EMF_CPP_SVG_POLYLINE__HPP
