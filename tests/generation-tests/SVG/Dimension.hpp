
#ifndef EMF_CPP_SVG_DIMENSION__HPP
#define EMF_CPP_SVG_DIMENSION__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::Dimension
class Dimension
{
public:

	typedef Dimension_ptr ptr_type;
	
	Dimension();
	virtual ~Dimension();

	typedef int width_t;
	typedef int height_t;

	
	void setWidth(width_t _width);
	width_t getWidth() const;
	void setHeight(height_t _height);
	height_t getHeight() const;

	
protected:

	width_t m_width;
	height_t m_height;

};

} // SVG


#endif // EMF_CPP_SVG_DIMENSION__HPP
