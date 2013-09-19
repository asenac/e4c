
#ifndef EMF_CPP_SVG_POLYGON__HPP
#define EMF_CPP_SVG_POLYGON__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Shape.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::Polygon
class Polygon :  public virtual ::SVG::Shape
{
public:

	typedef Polygon_ptr ptr_type;
	
	Polygon();
	virtual ~Polygon();

	typedef std::set < SVG::Point_ptr > waypoints_t;
	typedef int markerEnd_t;
	typedef int markerStart_t;

	
	// TODO
	void setMarkerEnd(markerEnd_t _markerEnd);
	markerEnd_t getMarkerEnd() const;
	void setMarkerStart(markerStart_t _markerStart);
	markerStart_t getMarkerStart() const;

	
protected:

	waypoints_t m_waypoints;
	markerEnd_t m_markerEnd;
	markerStart_t m_markerStart;

};

} // SVG


#endif // EMF_CPP_SVG_POLYGON__HPP
