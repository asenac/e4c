
#include "Tref.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/TextElement.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Tref include) START*/
/*PROTECTED REGION END*/

Tref::Tref() :
    m_xlinkHref()
{
    /*PROTECTED REGION ID(Tref constructor) START*/
    /*PROTECTED REGION END*/
}

Tref::~Tref()
{
    /*PROTECTED REGION ID(Tref destructor) START*/
    /*PROTECTED REGION END*/
}

Tref::xlinkHref_t Tref::getXlinkHref() const
{
    return e4c::returned(m_xlinkHref);
}

void Tref::setXlinkHref(xlinkHref_t xlinkHref_)
{
    if (m_xlinkHref == xlinkHref_)
        return;
    m_xlinkHref = xlinkHref_;
}



/*PROTECTED REGION ID(SVG::Tref implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Tref::eClassImpl() const
{
    return SVGPackage::_instance()->getTref();
}

