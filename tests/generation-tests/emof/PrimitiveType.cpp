
#include "PrimitiveType.hpp"
#include <emof/EmofPackage.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::PrimitiveType include) START*/
/*PROTECTED REGION END*/

PrimitiveType::PrimitiveType()
{
    /*PROTECTED REGION ID(PrimitiveType constructor) START*/
    /*PROTECTED REGION END*/
}

PrimitiveType::~PrimitiveType()
{
    /*PROTECTED REGION ID(PrimitiveType destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(emof::PrimitiveType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr PrimitiveType::eClassImpl() const
{
    return EmofPackage::_instance()->getPrimitiveType();
}

