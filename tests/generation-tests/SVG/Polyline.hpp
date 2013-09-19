
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

	typedef boost::ptr_vector < SVG::Point > waypoints_t;
	typedef int strokeDashArray_t;
	typedef int markerEnd_t;
	typedef int markerStart_t;

	
	// TODO
	void setStrokeDashArray(strokeDashArray_t _strokeDashArray);
	strokeDashArray_t getStrokeDashArray() const;
	void setMarkerEnd(markerEnd_t _markerEnd);
	markerEnd_t getMarkerEnd() const;
	void setMarkerStart(markerStart_t _markerStart);
	markerStart_t getMarkerStart() const;

	
protected:

	waypoints_t m_waypoints;
	strokeDashArray_t m_strokeDashArray;
	markerEnd_t m_markerEnd;
	markerStart_t m_markerStart;

};

} // SVG


#endif // EMF_CPP_SVG_POLYLINE__HPP
