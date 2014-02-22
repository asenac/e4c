
#include "SynonymType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::SynonymType include) START*/
/*PROTECTED REGION END*/

SynonymType::SynonymType()
{
    /*PROTECTED REGION ID(SynonymType constructor) START*/
    /*PROTECTED REGION END*/
}

SynonymType::~SynonymType()
{
    /*PROTECTED REGION ID(SynonymType destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::SynonymType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr SynonymType::eClassImpl() const
{
    return CodePackage::_instance()->getSynonymType();
}

