#include "PrimitiveTypesFactory.hpp"
#include "PrimitiveTypesPackage.hpp"
#include "include.hpp"

using namespace PrimitiveTypes;

PrimitiveTypesFactory::PrimitiveTypesFactory()
{
    // m_ePackage = PrimitiveTypesPackage::_instance();
}

const PrimitiveTypesFactory_ptr PrimitiveTypesFactory::_instance()
{
    static PrimitiveTypesFactory __instance;
    return &__instance;
}

