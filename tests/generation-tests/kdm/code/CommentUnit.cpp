
#include "CommentUnit.hpp"

using namespace kdm::code;

CommentUnit::CommentUnit() : 
	m_text()
{
}

CommentUnit::~CommentUnit()
{
}

void CommentUnit::setText(text_t _text)
{
	m_text = _text;;
}

text_t CommentUnit::getText() const
{
	return m_text;
}



