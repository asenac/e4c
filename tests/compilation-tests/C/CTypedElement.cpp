
#include "CTypedElement.hpp"
#include <C/CPackage.hpp>
#include <C/CClassifier.hpp>
#include <C/CSourceText.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CTypedElement include) START*/
/*PROTECTED REGION END*/

CTypedElement::CTypedElement() :
    m_type(),
    m_source()
{
    /*PROTECTED REGION ID(CTypedElement constructor) START*/
    /*PROTECTED REGION END*/
}

CTypedElement::~CTypedElement()
{
    /*PROTECTED REGION ID(CTypedElement destructor) START*/
    /*PROTECTED REGION END*/
}

CTypedElement::type_t CTypedElement::getType() const
{
    return e4c::returned(m_type);
}

void CTypedElement::setType(type_t type_)
{
    if (m_type == type_)
        return;
    m_type = type_;
}

CTypedElement::source_t CTypedElement::getSource() const
{
    return e4c::returned(m_source);
}

void CTypedElement::setSource(source_t source_)
{
    if (m_source == source_)
        return;
    m_source = source_;
}



/*PROTECTED REGION ID(C::CTypedElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CTypedElement::eClassImpl() const
{
    return CPackage::_instance()->getCTypedElement();
}

