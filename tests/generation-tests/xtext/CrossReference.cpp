
#include "CrossReference.hpp"
#include <xtext/XtextPackage.hpp>
#include <xtext/TypeRef.hpp>
#include <xtext/AbstractElement.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::CrossReference include) START*/
/*PROTECTED REGION END*/

CrossReference::CrossReference() :
    m_type(),
    m_terminal()
{
    /*PROTECTED REGION ID(CrossReference constructor) START*/
    /*PROTECTED REGION END*/
}

CrossReference::~CrossReference()
{
    /*PROTECTED REGION ID(CrossReference destructor) START*/
    /*PROTECTED REGION END*/
}

CrossReference::type_t CrossReference::getType() const
{
    return e4c::returned(m_type);
}


void CrossReference::setType(type_t type_)
{
    m_type.reset(type_);
}

CrossReference::type_t CrossReference::releaseType()
{
    return m_type.release();
}

CrossReference::terminal_t CrossReference::getTerminal() const
{
    return e4c::returned(m_terminal);
}


void CrossReference::setTerminal(terminal_t terminal_)
{
    m_terminal.reset(terminal_);
}

CrossReference::terminal_t CrossReference::releaseTerminal()
{
    return m_terminal.release();
}



/*PROTECTED REGION ID(xtext::CrossReference implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CrossReference::eClassImpl() const
{
    return XtextPackage::_instance()->getCrossReference();
}

