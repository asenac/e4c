
#ifndef EMF_CPP_SVG_COORDINATES__HPP
#define EMF_CPP_SVG_COORDINATES__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::Coordinates
class Coordinates
{
public:

	typedef Coordinates_ptr ptr_type;
	
	virtual ~Coordinates();

	typedef ::PrimitiveTypes::Double x_t;
	typedef ::PrimitiveTypes::Double y_t;

	
	void setX(x_t _x);
	x_t getX() const;
	void setY(y_t _y);
	y_t getY() const;


	x_t m_x;
	y_t m_y;

		
protected:
	Coordinates();

};

} // SVG


#endif // EMF_CPP_SVG_COORDINATES__HPP
