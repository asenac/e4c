
#include "Operation.hpp"
#include <emof/Class.hpp>
#include <emof/Parameter.hpp>
#include <emof/Type.hpp>

using namespace emof;

Operation::Operation() : 
	m_class(),
    m_ownedParameter(),
    m_raisedException()
{
}

Operation::~Operation()
{
}

Operation::class_t Operation::getClass() const
{
	return e4c::returned(m_class);
}

Operation::ownedParameter_t Operation::getOwnedParameter() const
{
	return e4c::returned(m_ownedParameter);
}

Operation::raisedException_t Operation::getRaisedException() const
{
	return e4c::returned(m_raisedException);
}



