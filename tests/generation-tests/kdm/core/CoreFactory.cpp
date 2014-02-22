#include "CoreFactory.hpp"
#include "CorePackage.hpp"
#include "include.hpp"

using namespace kdm::core;

CoreFactory::CoreFactory()
{
    // m_ePackage = CorePackage::_instance();
    // std::bind(&CoreFactory::createAggregatedRelationship, this);
    // m_ePackage->getTag_AggregatedRelationship();
}

const CoreFactory_ptr CoreFactory::_instance()
{
    static CoreFactory __instance;
    return &__instance;
}

AggregatedRelationship_ptr CoreFactory::createAggregatedRelationship() const
{
    return new AggregatedRelationship();
}

