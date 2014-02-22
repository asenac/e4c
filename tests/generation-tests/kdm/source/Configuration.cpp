
#include "Configuration.hpp"
#include <kdm/source/SourcePackage.hpp>

using namespace kdm::source;

/*PROTECTED REGION ID(kdm::source::Configuration include) START*/
/*PROTECTED REGION END*/

Configuration::Configuration()
{
    /*PROTECTED REGION ID(Configuration constructor) START*/
    /*PROTECTED REGION END*/
}

Configuration::~Configuration()
{
    /*PROTECTED REGION ID(Configuration destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::source::Configuration implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Configuration::eClassImpl() const
{
    return SourcePackage::_instance()->getConfiguration();
}

