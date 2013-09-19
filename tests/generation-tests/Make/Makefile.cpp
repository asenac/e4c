
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

name_t Makefile::getName() const
{
	return m_name;
}



