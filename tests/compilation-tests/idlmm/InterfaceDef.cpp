
#include "InterfaceDef.hpp"
#include <idlmm/InterfaceDef.hpp>
#include <idlmm/ForwardDef.hpp>

using namespace idlmm;

InterfaceDef::InterfaceDef() : 
	m_isAbstract(),
    m_isCustom(),
    m_isTruncatable(),
    m_derivesFrom(),
    m_forward()
{
}

InterfaceDef::~InterfaceDef()
{
}

void InterfaceDef::setIsAbstract(isAbstract_t _isAbstract)
{
	m_isAbstract = _isAbstract;;
}

isAbstract_t InterfaceDef::getIsAbstract() const
{
	return m_isAbstract;
}

void InterfaceDef::setIsCustom(isCustom_t _isCustom)
{
	m_isCustom = _isCustom;;
}

isCustom_t InterfaceDef::getIsCustom() const
{
	return m_isCustom;
}

void InterfaceDef::setIsTruncatable(isTruncatable_t _isTruncatable)
{
	m_isTruncatable = _isTruncatable;;
}

isTruncatable_t InterfaceDef::getIsTruncatable() const
{
	return m_isTruncatable;
}



