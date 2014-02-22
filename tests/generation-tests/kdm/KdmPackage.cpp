#include "KdmPackage.hpp"
#include "KdmFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm;

KdmPackage::KdmPackage()
{
    m_eFactoryInstance = KdmFactory::_instance();
    ::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();









}

const KdmPackage_ptr KdmPackage::_instance()
{
    static KdmPackage __instance;
    return &__instance;
}


extern "C" ::ecore::EPackage_ptr e4c_kdm()
{
    return ::kdm::KdmPackage::_instance();
}
