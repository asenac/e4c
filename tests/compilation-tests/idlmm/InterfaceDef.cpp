
#include "InterfaceDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/InterfaceDef.hpp>
#include <idlmm/ForwardDef.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::InterfaceDef include) START*/
/*PROTECTED REGION END*/

InterfaceDef::InterfaceDef() : 
	m_isAbstract(),
    m_isCustom(),
    m_isTruncatable(),
    m_derivesFrom(),
    m_forward()
{
	/*PROTECTED REGION ID(InterfaceDef constructor) START*/
	/*PROTECTED REGION END*/
}

InterfaceDef::~InterfaceDef()
{
	/*PROTECTED REGION ID(InterfaceDef destructor) START*/
	/*PROTECTED REGION END*/
}

void InterfaceDef::setIsAbstract(isAbstract_t _isAbstract)
{
	m_isAbstract = _isAbstract;;
}

InterfaceDef::isAbstract_t InterfaceDef::getIsAbstract() const
{
	return m_isAbstract;
}

void InterfaceDef::setIsCustom(isCustom_t _isCustom)
{
	m_isCustom = _isCustom;;
}

InterfaceDef::isCustom_t InterfaceDef::getIsCustom() const
{
	return m_isCustom;
}

void InterfaceDef::setIsTruncatable(isTruncatable_t _isTruncatable)
{
	m_isTruncatable = _isTruncatable;;
}

InterfaceDef::isTruncatable_t InterfaceDef::getIsTruncatable() const
{
	return m_isTruncatable;
}

InterfaceDef::derivesFrom_t InterfaceDef::getDerivesFrom() const
{
	return e4c::returned(m_derivesFrom);
}

void InterfaceDef::addDerivesFrom(idlmm::InterfaceDef_ptr derivesFrom_)
{
	if (e4c::contains(m_derivesFrom, derivesFrom_))
		return;
	m_derivesFrom.push_back(derivesFrom_);
}

void InterfaceDef::addAllDerivesFrom(const derivesFrom_t& derivesFrom_)
{
	for (auto i = derivesFrom_.begin(); i != derivesFrom_.end(); i++)
		addDerivesFrom(*i);
}

InterfaceDef::forward_t InterfaceDef::getForward() const
{
	return e4c::returned(m_forward);
}

void InterfaceDef::setForward(forward_t forward_)
{
	if (m_forward == forward_)
		return;
	m_forward = forward_;
}



/*PROTECTED REGION ID(idlmm::InterfaceDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr InterfaceDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getInterfaceDef();
}
 
