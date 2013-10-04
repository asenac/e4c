
#ifndef EMF_CPP_SVG_TREF__HPP
#define EMF_CPP_SVG_TREF__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/TextElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Tref :  public virtual ::SVG::TextElement
{
public:

	typedef Tref_ptr ptr_type;
	
	Tref();
	virtual ~Tref();

	typedef SVG::TextElement_ptr xlinkHref_t;
	
	xlinkHref_t getXlinkHref() const;
	void setXlinkHref(xlinkHref_t xlinkHref_);
	

	/*PROTECTED REGION ID(SVG::Tref public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class SVGPackage;

	SVG::TextElement_ptr m_xlinkHref;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(SVG::Tref protected) START*/
	/*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_TREF__HPP
