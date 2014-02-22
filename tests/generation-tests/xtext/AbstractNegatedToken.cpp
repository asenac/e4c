
#include "AbstractNegatedToken.hpp"
#include <xtext/XtextPackage.hpp>
#include <xtext/AbstractElement.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::AbstractNegatedToken include) START*/
/*PROTECTED REGION END*/

AbstractNegatedToken::AbstractNegatedToken() :
    m_terminal()
{
    /*PROTECTED REGION ID(AbstractNegatedToken constructor) START*/
    /*PROTECTED REGION END*/
}

AbstractNegatedToken::~AbstractNegatedToken()
{
    /*PROTECTED REGION ID(AbstractNegatedToken destructor) START*/
    /*PROTECTED REGION END*/
}

AbstractNegatedToken::terminal_t AbstractNegatedToken::getTerminal() const
{
    return e4c::returned(m_terminal);
}


void AbstractNegatedToken::setTerminal(terminal_t terminal_)
{
    m_terminal.reset(terminal_);
}

AbstractNegatedToken::terminal_t AbstractNegatedToken::releaseTerminal()
{
    return m_terminal.release();
}



/*PROTECTED REGION ID(xtext::AbstractNegatedToken implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractNegatedToken::eClassImpl() const
{
    return XtextPackage::_instance()->getAbstractNegatedToken();
}

