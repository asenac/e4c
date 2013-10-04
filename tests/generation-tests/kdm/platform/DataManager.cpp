
#include "DataManager.hpp"
#include <kdm/platform/PlatformPackage.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::DataManager include) START*/
/*PROTECTED REGION END*/

DataManager::DataManager()
{
	/*PROTECTED REGION ID(DataManager constructor) START*/
	/*PROTECTED REGION END*/
}

DataManager::~DataManager()
{
	/*PROTECTED REGION ID(DataManager destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::platform::DataManager implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DataManager::eClassImpl() const
{
	return PlatformPackage::_instance()->getDataManager();
}
 
