
#ifndef EMF_CPP_SVG_GRAPHICALELEMENT__HPP
#define EMF_CPP_SVG_GRAPHICALELEMENT__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Element.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class GraphicalElement :  public virtual ::SVG::Element
{
public:

	typedef GraphicalElement_ptr ptr_type;
	
	virtual ~GraphicalElement();

	typedef ::PrimitiveTypes::String stroke_t;
	
	void setStroke(stroke_t _stroke);
	stroke_t getStroke() const;
	

	/*PROTECTED REGION ID(SVG::GraphicalElement public) START*/
	/*PROTECTED REGION END*/
		
protected:
	GraphicalElement();

	friend class SVGPackage;

	stroke_t m_stroke;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(SVG::GraphicalElement protected) START*/
	/*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_GRAPHICALELEMENT__HPP
