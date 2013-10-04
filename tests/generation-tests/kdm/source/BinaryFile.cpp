
#include "BinaryFile.hpp"
#include <kdm/source/SourcePackage.hpp>

using namespace kdm::source;

/*PROTECTED REGION ID(kdm::source::BinaryFile include) START*/
/*PROTECTED REGION END*/

BinaryFile::BinaryFile()
{
	/*PROTECTED REGION ID(BinaryFile constructor) START*/
	/*PROTECTED REGION END*/
}

BinaryFile::~BinaryFile()
{
	/*PROTECTED REGION ID(BinaryFile destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::source::BinaryFile implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr BinaryFile::eClassImpl() const
{
	return SourcePackage::_instance()->getBinaryFile();
}
 
