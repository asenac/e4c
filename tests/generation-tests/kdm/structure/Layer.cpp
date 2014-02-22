
#include "Layer.hpp"
#include <kdm/structure/StructurePackage.hpp>

using namespace kdm::structure;

/*PROTECTED REGION ID(kdm::structure::Layer include) START*/
/*PROTECTED REGION END*/

Layer::Layer()
{
    /*PROTECTED REGION ID(Layer constructor) START*/
    /*PROTECTED REGION END*/
}

Layer::~Layer()
{
    /*PROTECTED REGION ID(Layer destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::structure::Layer implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Layer::eClassImpl() const
{
    return StructurePackage::_instance()->getLayer();
}

