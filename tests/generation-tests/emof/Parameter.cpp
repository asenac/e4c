
#include "Parameter.hpp"
#include <emof/EmofPackage.hpp>
#include <emof/Operation.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::Parameter include) START*/
/*PROTECTED REGION END*/

Parameter::Parameter() :
    m_operation()
{
    /*PROTECTED REGION ID(Parameter constructor) START*/
    /*PROTECTED REGION END*/
}

Parameter::~Parameter()
{
    /*PROTECTED REGION ID(Parameter destructor) START*/
    /*PROTECTED REGION END*/
}

Parameter::operation_t Parameter::getOperation() const
{
    return e4c::returned(m_operation);
}

void Parameter::setOperation(operation_t operation_)
{
    m_operation = operation_;
}



/*PROTECTED REGION ID(emof::Parameter implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Parameter::eClassImpl() const
{
    return EmofPackage::_instance()->getParameter();
}

