
#include "Project.hpp"
#include <kdm/source/SourcePackage.hpp>

using namespace kdm::source;

/*PROTECTED REGION ID(kdm::source::Project include) START*/
/*PROTECTED REGION END*/

Project::Project()
{
    /*PROTECTED REGION ID(Project constructor) START*/
    /*PROTECTED REGION END*/
}

Project::~Project()
{
    /*PROTECTED REGION ID(Project destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::source::Project implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Project::eClassImpl() const
{
    return SourcePackage::_instance()->getProject();
}

