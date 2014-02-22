
#include "Scale.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Scale include) START*/
/*PROTECTED REGION END*/

Scale::Scale() :
    m_sx(),
    m_sy()
{
    /*PROTECTED REGION ID(Scale constructor) START*/
    /*PROTECTED REGION END*/
}

Scale::~Scale()
{
    /*PROTECTED REGION ID(Scale destructor) START*/
    /*PROTECTED REGION END*/
}

void Scale::setSx(sx_t _sx)
{
    m_sx = _sx;;
}

Scale::sx_t Scale::getSx() const
{
    return m_sx;
}

void Scale::setSy(sy_t _sy)
{
    m_sy = _sy;;
}

Scale::sy_t Scale::getSy() const
{
    return m_sy;
}



/*PROTECTED REGION ID(SVG::Scale implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Scale::eClassImpl() const
{
    return SVGPackage::_instance()->getScale();
}

