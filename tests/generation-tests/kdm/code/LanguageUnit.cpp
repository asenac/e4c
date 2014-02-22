
#include "LanguageUnit.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::LanguageUnit include) START*/
/*PROTECTED REGION END*/

LanguageUnit::LanguageUnit()
{
    /*PROTECTED REGION ID(LanguageUnit constructor) START*/
    /*PROTECTED REGION END*/
}

LanguageUnit::~LanguageUnit()
{
    /*PROTECTED REGION ID(LanguageUnit destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::LanguageUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr LanguageUnit::eClassImpl() const
{
    return CodePackage::_instance()->getLanguageUnit();
}

