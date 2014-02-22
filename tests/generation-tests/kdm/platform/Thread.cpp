
#include "Thread.hpp"
#include <kdm/platform/PlatformPackage.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::Thread include) START*/
/*PROTECTED REGION END*/

Thread::Thread()
{
    /*PROTECTED REGION ID(Thread constructor) START*/
    /*PROTECTED REGION END*/
}

Thread::~Thread()
{
    /*PROTECTED REGION ID(Thread destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::platform::Thread implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Thread::eClassImpl() const
{
    return PlatformPackage::_instance()->getThread();
}

