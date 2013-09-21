
#ifndef EMF_CPP_SVG_MARKER__HPP
#define EMF_CPP_SVG_MARKER__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Shape.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::Marker
class Marker :  public virtual ::SVG::Shape
{
public:

	typedef Marker_ptr ptr_type;
	
	Marker();
	virtual ~Marker();

	typedef ::PrimitiveTypes::String markerUnits_t;
	typedef ::PrimitiveTypes::Double refX_t;
	typedef ::PrimitiveTypes::Double refY_t;
	typedef ::PrimitiveTypes::Double markerWidth_t;
	typedef ::PrimitiveTypes::Double markerHeight_t;
	typedef ::PrimitiveTypes::String orient_t;
	typedef std::set < SVG::Element_ptr > drawing_t;

	
	void setMarkerUnits(markerUnits_t _markerUnits);
	markerUnits_t getMarkerUnits() const;
	void setRefX(refX_t _refX);
	refX_t getRefX() const;
	void setRefY(refY_t _refY);
	refY_t getRefY() const;
	void setMarkerWidth(markerWidth_t _markerWidth);
	markerWidth_t getMarkerWidth() const;
	void setMarkerHeight(markerHeight_t _markerHeight);
	markerHeight_t getMarkerHeight() const;
	void setOrient(orient_t _orient);
	orient_t getOrient() const;
	drawing_t getDrawing() const;


	markerUnits_t m_markerUnits;
	refX_t m_refX;
	refY_t m_refY;
	markerWidth_t m_markerWidth;
	markerHeight_t m_markerHeight;
	orient_t m_orient;
	std::set < std::unique_ptr < SVG::Element > > m_drawing;

		
protected:

};

} // SVG


#endif // EMF_CPP_SVG_MARKER__HPP
