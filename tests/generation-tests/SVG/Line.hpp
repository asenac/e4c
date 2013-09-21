
#ifndef EMF_CPP_SVG_LINE__HPP
#define EMF_CPP_SVG_LINE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Shape.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::Line
class Line :  public virtual ::SVG::Shape
{
public:

	typedef Line_ptr ptr_type;
	
	Line();
	virtual ~Line();

	typedef std::set < SVG::Point_ptr > between_t;
	typedef ::PrimitiveTypes::String markerEnd_t;
	typedef ::PrimitiveTypes::String markerStart_t;

	
	between_t getBetween() const;
	void setMarkerEnd(markerEnd_t _markerEnd);
	markerEnd_t getMarkerEnd() const;
	void setMarkerStart(markerStart_t _markerStart);
	markerStart_t getMarkerStart() const;


	std::set < SVG::Point_ptr > m_between;
	markerEnd_t m_markerEnd;
	markerStart_t m_markerStart;

		
protected:

};

} // SVG


#endif // EMF_CPP_SVG_LINE__HPP
