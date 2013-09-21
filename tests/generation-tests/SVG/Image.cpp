
#include "Image.hpp"
#include <SVG/ReferencedFile.hpp>

using namespace SVG;

Image::Image() : 
	m_referee()
{
}

Image::~Image()
{
}

Image::referee_t Image::getReferee() const
{
	return e4c::returned(m_referee);
}



