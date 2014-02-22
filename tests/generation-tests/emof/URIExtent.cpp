
#include "URIExtent.hpp"
#include <emof/EmofPackage.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::URIExtent include) START*/
/*PROTECTED REGION END*/

URIExtent::URIExtent()
{
    /*PROTECTED REGION ID(URIExtent constructor) START*/
    /*PROTECTED REGION END*/
}

URIExtent::~URIExtent()
{
    /*PROTECTED REGION ID(URIExtent destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(emof::URIExtent implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr URIExtent::eClassImpl() const
{
    return EmofPackage::_instance()->getURIExtent();
}

