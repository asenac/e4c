
#include "TerminalRule.hpp"
#include <xtext/XtextPackage.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::TerminalRule include) START*/
/*PROTECTED REGION END*/

TerminalRule::TerminalRule()
{
    /*PROTECTED REGION ID(TerminalRule constructor) START*/
    /*PROTECTED REGION END*/
}

TerminalRule::~TerminalRule()
{
    /*PROTECTED REGION ID(TerminalRule destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(xtext::TerminalRule implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TerminalRule::eClassImpl() const
{
    return XtextPackage::_instance()->getTerminalRule();
}

