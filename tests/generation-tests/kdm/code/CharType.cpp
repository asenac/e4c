
#include "CharType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::CharType include) START*/
/*PROTECTED REGION END*/

CharType::CharType()
{
    /*PROTECTED REGION ID(CharType constructor) START*/
    /*PROTECTED REGION END*/
}

CharType::~CharType()
{
    /*PROTECTED REGION ID(CharType destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::CharType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CharType::eClassImpl() const
{
    return CodePackage::_instance()->getCharType();
}

