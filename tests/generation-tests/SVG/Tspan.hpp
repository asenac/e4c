
#ifndef EMF_CPP_SVG_TSPAN__HPP
#define EMF_CPP_SVG_TSPAN__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/TextElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::Tspan
class Tspan :  public virtual ::SVG::TextElement
{
public:

	typedef Tspan_ptr ptr_type;
	
	Tspan();
	virtual ~Tspan();

	typedef ::PrimitiveTypes::String content_t;

	
	void setContent(content_t _content);
	content_t getContent() const;


	content_t m_content;

		
protected:

};

} // SVG


#endif // EMF_CPP_SVG_TSPAN__HPP
