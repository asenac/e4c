
#ifndef EMF_CPP_SVG_TSPAN__HPP
#define EMF_CPP_SVG_TSPAN__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/TextElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


class Tspan :  public virtual ::SVG::TextElement
{
public:

	typedef Tspan_ptr ptr_type;
	
	Tspan();
	virtual ~Tspan();

	typedef ::PrimitiveTypes::String content_t;
	
	void setContent(content_t _content);
	content_t getContent() const;
	

	/*PROTECTED REGION ID(SVG::Tspan public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class SVGPackage;

	content_t m_content;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(SVG::Tspan protected) START*/
	/*PROTECTED REGION END*/
};

} // SVG


#endif // EMF_CPP_SVG_TSPAN__HPP
