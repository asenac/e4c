
#include "G.hpp"

using namespace SVG;

G::G() : 
	m_name()
{
}

G::~G()
{
}

void G::setName(name_t _name)
{
	m_name = _name;;
}

name_t G::getName() const
{
	return m_name;
}



