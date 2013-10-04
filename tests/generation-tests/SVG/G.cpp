
#include "G.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::G include) START*/
/*PROTECTED REGION END*/

G::G() : 
	m_name()
{
	/*PROTECTED REGION ID(G constructor) START*/
	/*PROTECTED REGION END*/
}

G::~G()
{
	/*PROTECTED REGION ID(G destructor) START*/
	/*PROTECTED REGION END*/
}

void G::setName(name_t _name)
{
	m_name = _name;;
}

G::name_t G::getName() const
{
	return m_name;
}



/*PROTECTED REGION ID(SVG::G implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr G::eClassImpl() const
{
	return SVGPackage::_instance()->getG();
}
 
