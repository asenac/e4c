
#include "EnumerationLiteral.hpp"
#include <emof/EmofPackage.hpp>
#include <emof/Enumeration.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::EnumerationLiteral include) START*/
/*PROTECTED REGION END*/

EnumerationLiteral::EnumerationLiteral() :
    m_enumeration()
{
    /*PROTECTED REGION ID(EnumerationLiteral constructor) START*/
    /*PROTECTED REGION END*/
}

EnumerationLiteral::~EnumerationLiteral()
{
    /*PROTECTED REGION ID(EnumerationLiteral destructor) START*/
    /*PROTECTED REGION END*/
}

EnumerationLiteral::enumeration_t EnumerationLiteral::getEnumeration() const
{
    return e4c::returned(m_enumeration);
}

void EnumerationLiteral::setEnumeration(enumeration_t enumeration_)
{
    m_enumeration = enumeration_;
}



/*PROTECTED REGION ID(emof::EnumerationLiteral implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EnumerationLiteral::eClassImpl() const
{
    return EmofPackage::_instance()->getEnumerationLiteral();
}

