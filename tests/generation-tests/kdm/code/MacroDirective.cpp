
#include "MacroDirective.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::MacroDirective include) START*/
/*PROTECTED REGION END*/

MacroDirective::MacroDirective()
{
    /*PROTECTED REGION ID(MacroDirective constructor) START*/
    /*PROTECTED REGION END*/
}

MacroDirective::~MacroDirective()
{
    /*PROTECTED REGION ID(MacroDirective destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::MacroDirective implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr MacroDirective::eClassImpl() const
{
    return CodePackage::_instance()->getMacroDirective();
}

