
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

	typedef std::vector < SVG::Point_ptr > waypoints_t;
	typedef ::PrimitiveTypes::String markerEnd_t;
	typedef ::PrimitiveTypes::String markerStart_t;

	
	waypoints_t getWaypoints() const;
	void setMarkerEnd(markerEnd_t _markerEnd);
	markerEnd_t getMarkerEnd() const;
	void setMarkerStart(markerStart_t _markerStart);
	markerStart_t getMarkerStart() const;


	std::vector < SVG::Point_ptr > m_waypoints;
	markerEnd_t m_markerEnd;
	markerStart_t m_markerStart;

		
protected:

};

} // SVG


#endif // EMF_CPP_SVG_POLYGON__HPP
