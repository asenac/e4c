
#include "Annotation.hpp"

using namespace kdm::kdm;

Annotation::Annotation() : 
	m_text()
{
}

Annotation::~Annotation()
{
}

void Annotation::setText(text_t _text)
{
	m_text = _text;;
}

text_t Annotation::getText() const
{
	return m_text;
}



