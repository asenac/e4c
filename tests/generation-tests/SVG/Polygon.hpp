
#ifndef EMF_CPP_SVG_POLYGON__HPP
#define EMF_CPP_SVG_POLYGON__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Shape.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


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
	void addWaypoints(SVG::Point_ptr waypoints_);
	void addAllWaypoints(const waypoints_t& waypoints_);
	void setMarkerEnd(markerEnd_t _markerEnd);
	markerEnd_t getMarkerEnd() const;
	void setMarkerStart(markerStart_t _markerStart);
	markerStart_t getMarkerStart() const;
	

	/*PROTECTED REGION ID(SVG::Polygon public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class SVGPackage;

	std::vector < SVG::Point_ptr > m_waypoints;
	markerEnd_t m_markerEnd;
	markerStart_t m_markerStart;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(SVG::Polygon protected) START*/
	/*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_POLYGON__HPP
