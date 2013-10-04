
#include "DataResource.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::DataResource include) START*/
/*PROTECTED REGION END*/

DataResource::DataResource()
{
	/*PROTECTED REGION ID(DataResource constructor) START*/
	/*PROTECTED REGION END*/
}

DataResource::~DataResource()
{
	/*PROTECTED REGION ID(DataResource destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::DataResource implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DataResource::eClassImpl() const
{
	return DataPackage::_instance()->getDataResource();
}
 
