#include "SequenceDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Expression.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::SequenceDef include) START*/
/*PROTECTED REGION END*/

SequenceDef::SequenceDef() : 
	m_bound()
{
	/*PROTECTED REGION ID(SequenceDef constructor) START*/
	/*PROTECTED REGION END*/
}

SequenceDef::~SequenceDef()
{
	/*PROTECTED REGION ID(SequenceDef destructor) START*/
	/*PROTECTED REGION END*/
}

SequenceDef::bound_t SequenceDef::getBound() const
{
	return e4c::returned(m_bound);
}

void SequenceDef::setBound(bound_t bound_)
{
	m_bound.reset(bound_);
}

SequenceDef::bound_t SequenceDef::releaseBound()
{
	return m_bound.release();
}



/*PROTECTED REGION ID(idlmm::SequenceDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr SequenceDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getSequenceDef();
}
 
