
#include "Attribute.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/Element.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Attribute include) START*/
/*PROTECTED REGION END*/

Attribute::Attribute() : 
	m_attOwner()
{
	/*PROTECTED REGION ID(Attribute constructor) START*/
	/*PROTECTED REGION END*/
}

Attribute::~Attribute()
{
	/*PROTECTED REGION ID(Attribute destructor) START*/
	/*PROTECTED REGION END*/
}

Attribute::attOwner_t Attribute::getAttOwner() const
{
	return e4c::returned(m_attOwner);
}

void Attribute::addAttOwner(SVG::Element_ptr attOwner_)
{
	if (e4c::contains(m_attOwner, attOwner_))
		return;
	m_attOwner.insert(attOwner_);
	attOwner_->addAttribute(this);
}

void Attribute::addAllAttOwner(const attOwner_t& attOwner_)
{
	for (auto i = attOwner_.begin(); i != attOwner_.end(); i++)
		addAttOwner(*i);
}



/*PROTECTED REGION ID(SVG::Attribute implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Attribute::eClassImpl() const
{
	return SVGPackage::_instance()->getAttribute();
}
 
