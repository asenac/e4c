
#include "Identifier.hpp"
#include <xpand3/Xpand3Package.hpp>

using namespace xpand3;

/*PROTECTED REGION ID(xpand3::Identifier include) START*/
/*PROTECTED REGION END*/

Identifier::Identifier() :
    m_value()
{
    /*PROTECTED REGION ID(Identifier constructor) START*/
    /*PROTECTED REGION END*/
}

Identifier::~Identifier()
{
    /*PROTECTED REGION ID(Identifier destructor) START*/
    /*PROTECTED REGION END*/
}

void Identifier::setValue(value_t _value)
{
    m_value = _value;;
}

Identifier::value_t Identifier::getValue() const
{
    return m_value;
}



/*PROTECTED REGION ID(xpand3::Identifier implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Identifier::eClassImpl() const
{
    return Xpand3Package::_instance()->getIdentifier();
}

