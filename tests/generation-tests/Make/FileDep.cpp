
#include "FileDep.hpp"

using namespace Make;

FileDep::FileDep() : 
	m_name()
{
}

FileDep::~FileDep()
{
}

void FileDep::setName(name_t _name)
{
	m_name = _name;;
}

name_t FileDep::getName() const
{
	return m_name;
}



