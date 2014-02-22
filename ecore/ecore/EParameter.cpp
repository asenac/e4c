#include "EParameter.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EOperation.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::EParameter include) START*/
/*PROTECTED REGION END*/

EParameter::EParameter() :
    m_eOperation()
{
    /*PROTECTED REGION ID(EParameter constructor) START*/
    /*PROTECTED REGION END*/
}

EParameter::~EParameter()
{
    /*PROTECTED REGION ID(EParameter destructor) START*/
    /*PROTECTED REGION END*/
}

EParameter::eOperation_t EParameter::getEOperation() const
{
    return e4c::returned(m_eOperation);
}
void EParameter::setEOperation(eOperation_t eOperation_)
{
    m_eOperation = eOperation_;
}



/*PROTECTED REGION ID(ecore::EParameter implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EParameter::eClassImpl() const
{
    return EcorePackage::_instance()->getEParameter();
}

