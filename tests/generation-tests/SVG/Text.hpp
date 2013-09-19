
#ifndef EMF_CPP_SVG_TEXT__HPP
#define EMF_CPP_SVG_TEXT__HPP

#include <SVG/fwd.hpp>
#include <SVG/meta.hpp>
#include <SVG/TextElement.hpp>

#include <e4c/mapping.hpp>

namespace SVG
{


// SVG::Text
class Text :  public virtual ::SVG::TextElement
{
public:

	typedef Text_ptr ptr_type;
	
	Text();
	virtual ~Text();

	typedef int lengthAdjust_t;
	typedef int content_t;

	
	void setLengthAdjust(lengthAdjust_t _lengthAdjust);
	lengthAdjust_t getLengthAdjust() const;
	void setContent(content_t _content);
	content_t getContent() const;

	
protected:

	lengthAdjust_t m_lengthAdjust;
	content_t m_content;

};

} // SVG


#endif // EMF_CPP_SVG_TEXT__HPP
