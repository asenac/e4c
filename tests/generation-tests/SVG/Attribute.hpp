
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

	typedef std::vector < SVG::Element_ptr > attOwner_t;

	
	// TODO

	
protected:
	Attribute();

	attOwner_t m_attOwner;

};

} // SVG


#endif // EMF_CPP_SVG_ATTRIBUTE__HPP
