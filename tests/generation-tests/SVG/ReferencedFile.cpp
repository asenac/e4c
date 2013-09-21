
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

ReferencedFile::referer_t ReferencedFile::getReferer() const
{
	return e4c::returned(m_referer);
}

void ReferencedFile::setName(name_t _name)
{
	m_name = _name;;
}

ReferencedFile::name_t ReferencedFile::getName() const
{
	return m_name;
}



