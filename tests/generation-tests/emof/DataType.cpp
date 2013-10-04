
#include "DataType.hpp"
#include <emof/EmofPackage.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::DataType include) START*/
/*PROTECTED REGION END*/

DataType::DataType()
{
	/*PROTECTED REGION ID(DataType constructor) START*/
	/*PROTECTED REGION END*/
}

DataType::~DataType()
{
	/*PROTECTED REGION ID(DataType destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(emof::DataType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DataType::eClassImpl() const
{
	return EmofPackage::_instance()->getDataType();
}
 
