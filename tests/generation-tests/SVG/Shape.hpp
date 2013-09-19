
#ifndef EMF_CPP_SVG_SHAPE__HPP
#define EMF_CPP_SVG_SHAPE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/GraphicalElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::Shape
class Shape :  public virtual ::SVG::GraphicalElement
{
public:

	typedef Shape_ptr ptr_type;
	
	virtual ~Shape();

	
	
	
	
protected:
	Shape();

	
};

} // SVG


#endif // EMF_CPP_SVG_SHAPE__HPP
