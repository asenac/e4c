
#include "ReferencedFile.hpp"
#include <SVG/Image.hpp>

using namespace SVG;

ReferencedFile::ReferencedFile() : 
	m_referer(),
    m_name()
{
}

ReferencedFile::~ReferencedFile()
{
}

void ReferencedFile::setName(name_t _name)
{
	m_name = _name;;
}

name_t ReferencedFile::getName() const
{
	return m_name;
}



