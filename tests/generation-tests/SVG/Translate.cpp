
#include "Translate.hpp"

using namespace SVG;

Translate::Translate() : 
	m_tx(),
    m_ty()
{
}

Translate::~Translate()
{
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



