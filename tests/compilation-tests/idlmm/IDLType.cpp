#include "IDLType.hpp"
#include <idlmm/IdlmmPackage.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::IDLType include) START*/
/*PROTECTED REGION END*/

IDLType::IDLType() :
    m_typeCode()
{
    /*PROTECTED REGION ID(IDLType constructor) START*/
    /*PROTECTED REGION END*/
}

IDLType::~IDLType()
{
    /*PROTECTED REGION ID(IDLType destructor) START*/
    /*PROTECTED REGION END*/
}

void IDLType::setTypeCode(typeCode_t _typeCode)
{
    m_typeCode = _typeCode;;
}

IDLType::typeCode_t IDLType::getTypeCode() const
{
    return m_typeCode;
}



/*PROTECTED REGION ID(idlmm::IDLType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr IDLType::eClassImpl() const
{
    return IdlmmPackage::_instance()->getIDLType();
}

