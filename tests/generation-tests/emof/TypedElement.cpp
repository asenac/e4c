
#include "TypedElement.hpp"
#include <emof/EmofPackage.hpp>
#include <emof/Type.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::TypedElement include) START*/
/*PROTECTED REGION END*/

TypedElement::TypedElement() :
    m_type()
{
    /*PROTECTED REGION ID(TypedElement constructor) START*/
    /*PROTECTED REGION END*/
}

TypedElement::~TypedElement()
{
    /*PROTECTED REGION ID(TypedElement destructor) START*/
    /*PROTECTED REGION END*/
}

TypedElement::type_t TypedElement::getType() const
{
    return e4c::returned(m_type);
}

void TypedElement::setType(type_t type_)
{
    if (m_type == type_)
        return;
    m_type = type_;
}



/*PROTECTED REGION ID(emof::TypedElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TypedElement::eClassImpl() const
{
    return EmofPackage::_instance()->getTypedElement();
}

