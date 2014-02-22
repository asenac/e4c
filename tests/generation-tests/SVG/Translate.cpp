
#include "Translate.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Translate include) START*/
/*PROTECTED REGION END*/

Translate::Translate() :
    m_tx(),
    m_ty()
{
    /*PROTECTED REGION ID(Translate constructor) START*/
    /*PROTECTED REGION END*/
}

Translate::~Translate()
{
    /*PROTECTED REGION ID(Translate destructor) START*/
    /*PROTECTED REGION END*/
}

void Translate::setTx(tx_t _tx)
{
    m_tx = _tx;;
}

Translate::tx_t Translate::getTx() const
{
    return m_tx;
}

void Translate::setTy(ty_t _ty)
{
    m_ty = _ty;;
}

Translate::ty_t Translate::getTy() const
{
    return m_ty;
}



/*PROTECTED REGION ID(SVG::Translate implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Translate::eClassImpl() const
{
    return SVGPackage::_instance()->getTranslate();
}

