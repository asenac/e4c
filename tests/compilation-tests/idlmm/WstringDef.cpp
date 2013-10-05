#include "WstringDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Expression.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::WstringDef include) START*/
/*PROTECTED REGION END*/

WstringDef::WstringDef() : 
	m_bound()
{
	/*PROTECTED REGION ID(WstringDef constructor) START*/
	/*PROTECTED REGION END*/
}

WstringDef::~WstringDef()
{
	/*PROTECTED REGION ID(WstringDef destructor) START*/
	/*PROTECTED REGION END*/
}

WstringDef::bound_t WstringDef::getBound() const
{
	return e4c::returned(m_bound);
}

void WstringDef::setBound(bound_t bound_)
{
	m_bound.reset(bound_);
}

WstringDef::bound_t WstringDef::releaseBound()
{
	return m_bound.release();
}



/*PROTECTED REGION ID(idlmm::WstringDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr WstringDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getWstringDef();
}
 
