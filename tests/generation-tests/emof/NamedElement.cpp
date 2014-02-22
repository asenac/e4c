
#include "NamedElement.hpp"
#include <emof/EmofPackage.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::NamedElement include) START*/
/*PROTECTED REGION END*/

NamedElement::NamedElement() :
    m_name()
{
    /*PROTECTED REGION ID(NamedElement constructor) START*/
    /*PROTECTED REGION END*/
}

NamedElement::~NamedElement()
{
    /*PROTECTED REGION ID(NamedElement destructor) START*/
    /*PROTECTED REGION END*/
}

void NamedElement::setName(name_t _name)
{
    m_name = _name;;
}

NamedElement::name_t NamedElement::getName() const
{
    return m_name;
}



/*PROTECTED REGION ID(emof::NamedElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr NamedElement::eClassImpl() const
{
    return EmofPackage::_instance()->getNamedElement();
}

