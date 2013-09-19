
#ifndef EMF_CPP_SVG_GRAPHICALELEMENT__HPP
#define EMF_CPP_SVG_GRAPHICALELEMENT__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Element.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::GraphicalElement
class GraphicalElement :  public virtual ::SVG::Element
{
public:

	typedef GraphicalElement_ptr ptr_type;
	
	virtual ~GraphicalElement();

	typedef int stroke_t;

	
	void setStroke(stroke_t _stroke);
	stroke_t getStroke() const;

	
protected:
	GraphicalElement();

	stroke_t m_stroke;

};

} // SVG


#endif // EMF_CPP_SVG_GRAPHICALELEMENT__HPP
