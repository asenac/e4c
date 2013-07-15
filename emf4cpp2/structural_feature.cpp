#include "structural_feature.hpp"

using namespace e4c;

structural_feature::structural_feature(eclass * owner_, FeatureType type_) :
    m_owner(owner_), m_type(type_)
{
    m_owner->register_feature(this);
}

structural_feature::~structural_feature() {}

