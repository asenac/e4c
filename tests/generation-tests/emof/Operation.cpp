
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



