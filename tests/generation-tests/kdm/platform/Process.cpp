
#include "Process.hpp"
#include <kdm/platform/PlatformPackage.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::Process include) START*/
/*PROTECTED REGION END*/

Process::Process()
{
	/*PROTECTED REGION ID(Process constructor) START*/
	/*PROTECTED REGION END*/
}

Process::~Process()
{
	/*PROTECTED REGION ID(Process destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::platform::Process implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Process::eClassImpl() const
{
	return PlatformPackage::_instance()->getProcess();
}
 
