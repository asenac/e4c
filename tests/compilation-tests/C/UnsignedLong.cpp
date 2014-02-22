
#include "UnsignedLong.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::UnsignedLong include) START*/
/*PROTECTED REGION END*/

UnsignedLong::UnsignedLong()
{
    /*PROTECTED REGION ID(UnsignedLong constructor) START*/
    /*PROTECTED REGION END*/
}

UnsignedLong::~UnsignedLong()
{
    /*PROTECTED REGION ID(UnsignedLong destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::UnsignedLong implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UnsignedLong::eClassImpl() const
{
    return CPackage::_instance()->getUnsignedLong();
}

