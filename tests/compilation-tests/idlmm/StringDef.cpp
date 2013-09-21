
#include "StringDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Expression.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::StringDef include) START*/
/*PROTECTED REGION END*/

StringDef::StringDef() : 
	m_bound()
{
}

StringDef::~StringDef()
{
}

StringDef::bound_t StringDef::getBound() const
{
	return e4c::returned(m_bound);
}


void StringDef::setBound(bound_t bound_)
{
	m_bound.reset(bound_);
}

StringDef::bound_t StringDef::releaseBound()
{
	return m_bound.release();
}





/*PROTECTED REGION ID(idlmm::StringDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr StringDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getStringDef();
}
 
