
#include "ChoiceType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::ChoiceType include) START*/
/*PROTECTED REGION END*/

ChoiceType::ChoiceType()
{
    /*PROTECTED REGION ID(ChoiceType constructor) START*/
    /*PROTECTED REGION END*/
}

ChoiceType::~ChoiceType()
{
    /*PROTECTED REGION ID(ChoiceType destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::ChoiceType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ChoiceType::eClassImpl() const
{
    return CodePackage::_instance()->getChoiceType();
}

