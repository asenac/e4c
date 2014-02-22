
#include "ExecutableFile.hpp"
#include <kdm/source/SourcePackage.hpp>

using namespace kdm::source;

/*PROTECTED REGION ID(kdm::source::ExecutableFile include) START*/
/*PROTECTED REGION END*/

ExecutableFile::ExecutableFile()
{
    /*PROTECTED REGION ID(ExecutableFile constructor) START*/
    /*PROTECTED REGION END*/
}

ExecutableFile::~ExecutableFile()
{
    /*PROTECTED REGION ID(ExecutableFile destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::source::ExecutableFile implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ExecutableFile::eClassImpl() const
{
    return SourcePackage::_instance()->getExecutableFile();
}

