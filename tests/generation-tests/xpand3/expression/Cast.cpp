
#include "Cast.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/Identifier.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::Cast include) START*/
/*PROTECTED REGION END*/

Cast::Cast() : 
	m_type(),
    m_target()
{
	/*PROTECTED REGION ID(Cast constructor) START*/
	/*PROTECTED REGION END*/
}

Cast::~Cast()
{
	/*PROTECTED REGION ID(Cast destructor) START*/
	/*PROTECTED REGION END*/
}

Cast::type_t Cast::getType() const
{
	return e4c::returned(m_type);
}


void Cast::setType(type_t type_)
{
	m_type.reset(type_);
}

Cast::type_t Cast::releaseType()
{
	return m_type.release();
}

Cast::target_t Cast::getTarget() const
{
	return e4c::returned(m_target);
}


void Cast::setTarget(target_t target_)
{
	m_target.reset(target_);
}

Cast::target_t Cast::releaseTarget()
{
	return m_target.release();
}



/*PROTECTED REGION ID(xpand3::expression::Cast implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Cast::eClassImpl() const
{
	return ExpressionPackage::_instance()->getCast();
}
 
