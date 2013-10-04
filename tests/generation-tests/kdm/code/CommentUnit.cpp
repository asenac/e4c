
#include "CommentUnit.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::CommentUnit include) START*/
/*PROTECTED REGION END*/

CommentUnit::CommentUnit() : 
	m_text()
{
	/*PROTECTED REGION ID(CommentUnit constructor) START*/
	/*PROTECTED REGION END*/
}

CommentUnit::~CommentUnit()
{
	/*PROTECTED REGION ID(CommentUnit destructor) START*/
	/*PROTECTED REGION END*/
}

void CommentUnit::setText(text_t _text)
{
	m_text = _text;;
}

CommentUnit::text_t CommentUnit::getText() const
{
	return m_text;
}



/*PROTECTED REGION ID(kdm::code::CommentUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CommentUnit::eClassImpl() const
{
	return CodePackage::_instance()->getCommentUnit();
}
 
