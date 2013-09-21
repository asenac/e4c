
#include "Parameter.hpp"
#include <emof/Operation.hpp>

using namespace emof;

Parameter::Parameter() : 
	m_operation()
{
}

Parameter::~Parameter()
{
}

Parameter::operation_t Parameter::getOperation() const
{
	return e4c::returned(m_operation);
}



