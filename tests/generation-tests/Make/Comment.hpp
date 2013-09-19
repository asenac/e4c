
#ifndef EMF_CPP_MAKE_COMMENT__HPP
#define EMF_CPP_MAKE_COMMENT__HPP

#include <Make/fwd.hpp>
#include <Make/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace Make
{


// Make::Comment
class Comment
{
public:

	typedef Comment_ptr ptr_type;
	
	Comment();
	virtual ~Comment();

	typedef int text_t;

	
	void setText(text_t _text);
	text_t getText() const;

	
protected:

	text_t m_text;

};

} // Make


#endif // EMF_CPP_MAKE_COMMENT__HPP
