
#ifndef EMF_CPP_MAKE_COMMENT__HPP
#define EMF_CPP_MAKE_COMMENT__HPP

#include <Make/fwd.hpp>
#include <Make/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace Make
{


class Comment : ::ecore::EObject
{
public:

	typedef Comment_ptr ptr_type;
	
	Comment();
	virtual ~Comment();

	typedef ::PrimitiveTypes::String text_t;
	
	void setText(text_t _text);
	text_t getText() const;
	

	/*PROTECTED REGION ID(Make::Comment public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class MakePackage;

	text_t m_text;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(Make::Comment protected) START*/
	/*PROTECTED REGION END*/
};

} // Make


#endif // EMF_CPP_MAKE_COMMENT__HPP
