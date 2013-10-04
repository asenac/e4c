
#include "DisplaysImage.hpp"
#include <kdm/ui/UiPackage.hpp>
#include <kdm/source/Image.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::DisplaysImage include) START*/
/*PROTECTED REGION END*/

DisplaysImage::DisplaysImage() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(DisplaysImage constructor) START*/
	/*PROTECTED REGION END*/
}

DisplaysImage::~DisplaysImage()
{
	/*PROTECTED REGION ID(DisplaysImage destructor) START*/
	/*PROTECTED REGION END*/
}

DisplaysImage::to_t DisplaysImage::getTo() const
{
	return e4c::returned(m_to);
}

void DisplaysImage::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

DisplaysImage::from_t DisplaysImage::getFrom() const
{
	return e4c::returned(m_from);
}

void DisplaysImage::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::ui::DisplaysImage implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DisplaysImage::eClassImpl() const
{
	return UiPackage::_instance()->getDisplaysImage();
}
 
