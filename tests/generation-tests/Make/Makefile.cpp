
#include "Makefile.hpp"
#include <Make/Comment.hpp>
#include <Make/Element.hpp>

using namespace Make;

Makefile::Makefile() : 
	m_name(),
    m_comment(),
    m_elements()
{
}

Makefile::~Makefile()
{
}

void Makefile::setName(name_t _name)
{
	m_name = _name;;
}

Makefile::name_t Makefile::getName() const
{
	return m_name;
}

Makefile::comment_t Makefile::getComment() const
{
	return e4c::returned(m_comment);
}

Makefile::elements_t Makefile::getElements() const
{
	return e4c::returned(m_elements);
}



