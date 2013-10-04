
#include "Comment.hpp"
#include <Make/MakePackage.hpp>

using namespace Make;

/*PROTECTED REGION ID(Make::Comment include) START*/
/*PROTECTED REGION END*/

Comment::Comment() : 
	m_text()
{
	/*PROTECTED REGION ID(Comment constructor) START*/
	/*PROTECTED REGION END*/
}

Comment::~Comment()
{
	/*PROTECTED REGION ID(Comment destructor) START*/
	/*PROTECTED REGION END*/
}

void Comment::setText(text_t _text)
{
	m_text = _text;;
}

Comment::text_t Comment::getText() const
{
	return m_text;
}



/*PROTECTED REGION ID(Make::Comment implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Comment::eClassImpl() const
{
	return MakePackage::_instance()->getComment();
}
 
