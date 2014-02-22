
#include "Type.hpp"
#include <myDsl/MyDslPackage.hpp>

using namespace myDsl;

/*PROTECTED REGION ID(myDsl::Type include) START*/
/*PROTECTED REGION END*/

Type::Type() :
    m_name()
{
    /*PROTECTED REGION ID(Type constructor) START*/
    /*PROTECTED REGION END*/
}

Type::~Type()
{
    /*PROTECTED REGION ID(Type destructor) START*/
    /*PROTECTED REGION END*/
}

void Type::setName(name_t _name)
{
    m_name = _name;;
}

Type::name_t Type::getName() const
{
    return m_name;
}



/*PROTECTED REGION ID(myDsl::Type implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Type::eClassImpl() const
{
    return MyDslPackage::_instance()->getType();
}

