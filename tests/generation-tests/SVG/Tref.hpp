
#ifndef EMF_CPP_SVG_TREF__HPP
#define EMF_CPP_SVG_TREF__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/TextElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::Tref
class Tref :  public virtual ::SVG::TextElement
{
public:

	typedef Tref_ptr ptr_type;
	
	Tref();
	virtual ~Tref();

	typedef SVG::TextElement_ptr xlinkHref_t;

	
	// TODO

	
protected:

	xlinkHref_t m_xlinkHref;

};

} // SVG


#endif // EMF_CPP_SVG_TREF__HPP
