
#include "SvgFile.hpp"
#include <SVG/Svg.hpp>
#include <SVG/Element.hpp>

using namespace SVG;

SvgFile::SvgFile() : 
	m_tag(),
    m_elements()
{
}

SvgFile::~SvgFile()
{
}

SvgFile::tag_t SvgFile::getTag() const
{
	return e4c::returned(m_tag);
}

SvgFile::elements_t SvgFile::getElements() const
{
	return e4c::returned(m_elements);
}



