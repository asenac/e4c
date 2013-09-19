
#include "Comment.hpp"

using namespace Make;

Comment::Comment() : 
	m_text()
{
}

Comment::~Comment()
{
}

void Comment::setText(text_t _text)
{
	m_text = _text;;
}

text_t Comment::getText() const
{
	return m_text;
}



