
#include "Rect.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Rect include) START*/
/*PROTECTED REGION END*/

Rect::Rect() :
    m_rx(),
    m_ry()
{
    /*PROTECTED REGION ID(Rect constructor) START*/
    /*PROTECTED REGION END*/
}

Rect::~Rect()
{
    /*PROTECTED REGION ID(Rect destructor) START*/
    /*PROTECTED REGION END*/
}

void Rect::setRx(rx_t _rx)
{
    m_rx = _rx;;
}

Rect::rx_t Rect::getRx() const
{
    return m_rx;
}

void Rect::setRy(ry_t _ry)
{
    m_ry = _ry;;
}

Rect::ry_t Rect::getRy() const
{
    return m_ry;
}



/*PROTECTED REGION ID(SVG::Rect implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Rect::eClassImpl() const
{
    return SVGPackage::_instance()->getRect();
}

