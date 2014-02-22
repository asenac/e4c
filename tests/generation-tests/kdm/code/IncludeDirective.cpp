
#include "IncludeDirective.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::IncludeDirective include) START*/
/*PROTECTED REGION END*/

IncludeDirective::IncludeDirective()
{
    /*PROTECTED REGION ID(IncludeDirective constructor) START*/
    /*PROTECTED REGION END*/
}

IncludeDirective::~IncludeDirective()
{
    /*PROTECTED REGION ID(IncludeDirective destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::IncludeDirective implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr IncludeDirective::eClassImpl() const
{
    return CodePackage::_instance()->getIncludeDirective();
}

