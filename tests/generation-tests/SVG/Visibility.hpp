
#ifndef EMF_CPP_SVG_VISIBILITY__HPP
#define EMF_CPP_SVG_VISIBILITY__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Attribute.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Visibility :  public virtual ::SVG::Attribute
{
public:

	typedef Visibility_ptr ptr_type;
	
	Visibility();
	virtual ~Visibility();

	typedef ::PrimitiveTypes::Boolean visible_t;
	
	void setVisible(visible_t _visible);
	visible_t getVisible() const;
	

	/*PROTECTED REGION ID(SVG::Visibility public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class SVGPackage;

	visible_t m_visible;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(SVG::Visibility protected) START*/
	/*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_VISIBILITY__HPP
