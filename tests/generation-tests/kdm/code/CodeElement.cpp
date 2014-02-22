
#include "CodeElement.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::CodeElement include) START*/
/*PROTECTED REGION END*/

CodeElement::CodeElement()
{
    /*PROTECTED REGION ID(CodeElement constructor) START*/
    /*PROTECTED REGION END*/
}

CodeElement::~CodeElement()
{
    /*PROTECTED REGION ID(CodeElement destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::CodeElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CodeElement::eClassImpl() const
{
    return CodePackage::_instance()->getCodeElement();
}

