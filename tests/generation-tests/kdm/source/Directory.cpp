
#include "Directory.hpp"
#include <kdm/source/SourcePackage.hpp>

using namespace kdm::source;

/*PROTECTED REGION ID(kdm::source::Directory include) START*/
/*PROTECTED REGION END*/

Directory::Directory() :
    m_path()
{
    /*PROTECTED REGION ID(Directory constructor) START*/
    /*PROTECTED REGION END*/
}

Directory::~Directory()
{
    /*PROTECTED REGION ID(Directory destructor) START*/
    /*PROTECTED REGION END*/
}

void Directory::setPath(path_t _path)
{
    m_path = _path;;
}

Directory::path_t Directory::getPath() const
{
    return m_path;
}



/*PROTECTED REGION ID(kdm::source::Directory implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Directory::eClassImpl() const
{
    return SourcePackage::_instance()->getDirectory();
}

