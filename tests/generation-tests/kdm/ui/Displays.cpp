
#include "Displays.hpp"
#include <kdm/ui/UiPackage.hpp>
#include <kdm/ui/UIResource.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::Displays include) START*/
/*PROTECTED REGION END*/

Displays::Displays() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(Displays constructor) START*/
	/*PROTECTED REGION END*/
}

Displays::~Displays()
{
	/*PROTECTED REGION ID(Displays destructor) START*/
	/*PROTECTED REGION END*/
}

Displays::to_t Displays::getTo() const
{
	return e4c::returned(m_to);
}

void Displays::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

Displays::from_t Displays::getFrom() const
{
	return e4c::returned(m_from);
}

void Displays::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::ui::Displays implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Displays::eClassImpl() const
{
	return UiPackage::_instance()->getDisplays();
}
 
