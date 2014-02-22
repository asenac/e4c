
#include "Use.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/Element.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Use include) START*/
/*PROTECTED REGION END*/

Use::Use() :
    m_use()
{
    /*PROTECTED REGION ID(Use constructor) START*/
    /*PROTECTED REGION END*/
}

Use::~Use()
{
    /*PROTECTED REGION ID(Use destructor) START*/
    /*PROTECTED REGION END*/
}

Use::use_t Use::getUse() const
{
    return e4c::returned(m_use);
}

void Use::addUse(SVG::Element_ptr use_)
{
    if (e4c::contains(m_use, use_))
        return;
    m_use.insert(use_);
    use_->addTarget(this);
}

void Use::addAllUse(const use_t& use_)
{
    for (auto i = use_.begin(); i != use_.end(); i++)
        addUse(*i);
}



/*PROTECTED REGION ID(SVG::Use implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Use::eClassImpl() const
{
    return SVGPackage::_instance()->getUse();
}

