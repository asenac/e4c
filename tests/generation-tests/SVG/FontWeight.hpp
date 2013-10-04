
#ifndef EMF_CPP_SVG_FONTWEIGHT__HPP
#define EMF_CPP_SVG_FONTWEIGHT__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/Attribute.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class FontWeight :  public virtual ::SVG::Attribute
{
public:

	typedef FontWeight_ptr ptr_type;
	
	FontWeight();
	virtual ~FontWeight();

	typedef ::PrimitiveTypes::Boolean bold_t;
	
	void setBold(bold_t _bold);
	bold_t getBold() const;
	

	/*PROTECTED REGION ID(SVG::FontWeight public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class SVGPackage;

	bold_t m_bold;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(SVG::FontWeight protected) START*/
	/*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_FONTWEIGHT__HPP
