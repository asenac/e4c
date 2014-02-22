
#include "KDMModel.hpp"
#include <kdm/kdm/KdmPackage.hpp>

using namespace kdm::kdm;

/*PROTECTED REGION ID(kdm::kdm::KDMModel include) START*/
/*PROTECTED REGION END*/

KDMModel::KDMModel()
{
    /*PROTECTED REGION ID(KDMModel constructor) START*/
    /*PROTECTED REGION END*/
}

KDMModel::~KDMModel()
{
    /*PROTECTED REGION ID(KDMModel destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::kdm::KDMModel implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr KDMModel::eClassImpl() const
{
    return KdmPackage::_instance()->getKDMModel();
}

