
#include "DisplaysImage.hpp"
#include <kdm/source/Image.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::ui;

DisplaysImage::DisplaysImage() : 
	m_to(),
    m_from()
{
}

DisplaysImage::~DisplaysImage()
{
}

DisplaysImage::to_t DisplaysImage::getTo() const
{
	return e4c::returned(m_to);
}

DisplaysImage::from_t DisplaysImage::getFrom() const
{
	return e4c::returned(m_from);
}



