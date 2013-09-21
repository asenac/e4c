
#ifndef EMF_CPP_SVG_ATTRIBUTE__HPP
#define EMF_CPP_SVG_ATTRIBUTE__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::Attribute
class Attribute
{
public:

	typedef Attribute_ptr ptr_type;
	
	virtual ~Attribute();

	typedef std::set < SVG::Element_ptr > attOwner_t;

	
	attOwner_t getAttOwner() const;


	std::set < SVG::Element_ptr > m_attOwner;

		
protected:
	Attribute();

};

} // SVG


#endif // EMF_CPP_SVG_ATTRIBUTE__HPP
